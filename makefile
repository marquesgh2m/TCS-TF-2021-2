all:
	@$(MAKE) -C Unity/examples/sort/src app
	@$(MAKE) -C Unity/examples/sort all

clean:
	@$(MAKE) -C Unity/examples/sort clean
	@$(MAKE) -C Unity/examples/sort/src clean

cppcheck:
	@$(MAKE) -C Unity/examples/sort testcppcheck 

compile:
	@$(MAKE) -C Unity/examples/sort compile 

gcov:
	@$(MAKE) -C Unity/examples/sort testgcov 

valgrind:
	@$(MAKE) -C Unity/examples/sort testvalgrind 

run:
	@$(MAKE) -C Unity/examples/sort run 

sanitizer:
	@$(MAKE) -C Unity/examples/sort compilesanitizer