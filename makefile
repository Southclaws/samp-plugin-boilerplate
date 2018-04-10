# -
# Setup test requirements
# -

test-setup:
	cd test && sampctl server ensure
	sampctl package ensure

# -
# Run Tests
# -

test-windows:
	cp test/plugins/Debug/projectname.dll test/plugins/projectname.dll
	sampctl package build
	cd test && sampctl server run

test-linux:
	sampctl package build
	cd test && sampctl server run

# -
# Build (Linux)
# -

build-linux:
	rm -rf build
	docker build -t southclaws/projectname-build .
	docker run -v $(shell pwd)/test/plugins:/root/test/plugins southclaws/projectname-build

build-inside:
	cd build && cmake .. && make
