all:
	$(MAKE) -C Unity/examples/sort/src app
	$(MAKE) -C Unity/examples/sort all

clean:
	$(MAKE) -C Unity/examples/sort/src clean
	$(MAKE) -C Unity/examples/sort clean