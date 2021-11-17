all:
	@$(MAKE) --no-print-directory -C Unity/examples/sort/src app
	@$(MAKE) --no-print-directory -C Unity/examples/sort all

clean:
	@$(MAKE) --no-print-directory -C Unity/examples/sort clean
	@$(MAKE) --no-print-directory -C Unity/examples/sort/src clean

cppcheck:
	@$(MAKE) --no-print-directory -C Unity/examples/sort testcppcheck 

compile:
	@$(MAKE) --no-print-directory -C Unity/examples/sort compile 

gcov:
	@$(MAKE) --no-print-directory -C Unity/examples/sort testgcov 

run:
	@$(MAKE) --no-print-directory -C Unity/examples/sort run 

sanitizer:
	@$(MAKE) --no-print-directory -C Unity/examples/sort compilesanitizer