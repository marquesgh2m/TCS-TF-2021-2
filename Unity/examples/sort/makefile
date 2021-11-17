# ==========================================
#   Unity Project - A Test Framework for C
#   Copyright (c) 2007 Mike Karlesky, Mark VanderVoord, Greg Williams
#   [Released under MIT License. Please refer to license.txt for details]
# ==========================================

#We try to detect the OS we are running on, and adjust commands as needed
ifeq ($(OS),Windows_NT)
  ifeq ($(shell uname -s),) # not in a bash-like shell
	CLEANUP = del /F /Q
	MKDIR = mkdir
  else # in a bash-like shell, like msys
	CLEANUP = rm -f
	MKDIR = mkdir -p
  endif
	TARGET_EXTENSION=.exe
else
	CLEANUP = rm -f
	MKDIR = mkdir -p
	TARGET_EXTENSION=.out
endif

C_COMPILER=gcc
ifeq ($(shell uname -s), Darwin)
C_COMPILER=clang
endif

UNITY_ROOT=../..

CFLAGS=-std=c99
CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -Wpointer-arith
CFLAGS += -Wcast-align
CFLAGS += -Wwrite-strings
CFLAGS += -Wswitch-default
CFLAGS += -Wunreachable-code
CFLAGS += -Winit-self
CFLAGS += -Wmissing-field-initializers
CFLAGS += -Wno-unknown-pragmas
CFLAGS += -Wstrict-prototypes
CFLAGS += -Wundef
CFLAGS += -Wold-style-definition
CFLAGS += -Wno-switch-default
CFLAGS += -Wno-discarded-qualifiers
CFLAGS += $(addprefix -Xcompiler ,$(CCFLAGS))
CFLAGS += $(addprefix -Xlinker ,$(LDFLAGS))
CFLAGS += -fprofile-arcs #GCOV
CFLAGS += -ftest-coverage #GCOV


TARGET_BASE1=all_tests
TARGET1 = $(TARGET_BASE1)$(TARGET_EXTENSION)
SRC_FILES1=\
  $(UNITY_ROOT)/src/unity.c \
  $(UNITY_ROOT)/extras/fixture/src/unity_fixture.c \
  test/TestSort.c \
  test/test_runners/TestSort_Runner.c \
  test/test_runners/all_tests.c \
  src/sort.c \
  src/get_opt.c \
  src/array.c
  
INC_DIRS=-Isrc -I$(UNITY_ROOT)/src -I$(UNITY_ROOT)/extras/fixture/src
SYMBOLS=

# TEST PARAMETERS
CPPCHECKFILE=cppcheck.log
VALGRINDFILE=valgrind.log

all: clean testcppcheck compile testvalgrind run compilesanitizer testgcov

compile:
	@echo "===== COMPILATION ====="
	$(C_COMPILER) $(CFLAGS) $(INC_DIRS) $(SYMBOLS) $(SRC_FILES1) -o $(TARGET1)

run:
	@echo "===== RUNNING ====="
	- ./$(TARGET1) -v

testcppcheck:
	@echo "===== TEST CPP CHECK ====="
	@rm -rf $(CPPCHECKFILE)
	@cppcheck --output-file=$(CPPCHECKFILE) src/sort.c
	@test ! -s $(CPPCHECKFILE) || (echo CPPCHECK ERROR! && cat $(CPPCHECKFILE) && exit 1) 
	@echo "OK"

testvalgrind:
	@echo "===== TEST VALGRIND ====="
	@rm -rf $(VALGRINDFILE)
	@valgrind --leak-check=full --show-leak-kinds=all --quiet --log-file=$(VALGRINDFILE) ./all_tests.out
	@test ! -s $(VALGRINDFILE) || (echo VALGRIND MEMORY ERROR! Log at $(VALGRINDFILE) && exit 1)  

compilesanitizer:
	@echo "===== SANITIZER COMPILATION ====="
	$(C_COMPILER) -g -Wall -Wfatal-errors -fsanitize=address $(INC_DIRS) $(SYMBOLS) $(SRC_FILES1) -o $(TARGET1)

testgcov:
	@echo "===== TEST GCOV COMP ====="
	#rm -fr $(ALL) *.o cov* *.dSYM *.gcda *.gcno *.gcov
	#rm -fr cov* *.dSYM *.gcda *.gcno *.gcov
	#ADD TO CFLAGS += -fprofile-arcs #GCOV
	#ADD TO CFLAGS += -ftest-coverage #GCOV
	#$(C_COMPILER) $(CFLAGS) -fprofile-arcs -ftest-coverage $(INC_DIRS) $(SYMBOLS) $(SRC_FILES1) -o $(TARGET1)
	#./$(TARGET1) -v
	@rm -rf unity* # exclui pastas da unity do gcov
	@mkdir -p coverage
	@gcov ***.gcno -m
	@gcovr -r . -e "src/array.c" -e "src/get_opt.c" --html --html-details -o coverage/index.html

clean:
	$(CLEANUP) $(TARGET1)

ci: CFLAGS += -Werror
ci: compile
