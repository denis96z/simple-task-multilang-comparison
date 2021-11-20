BUILD_TYPE ?= Release

ifeq ($(BUILD_TYPE),Release)
BUILD_DIR = $(PWD)/cmake-build-release
else
BUILD_DIR = $(PWD)/cmake-build-debug
endif

.PHONY: proj-c
proj-c:
	cmake $(PWD) -DCMAKE_BUILD_TYPE=$(BUILD_TYPE) -B$(BUILD_DIR)
	cmake --build $(BUILD_DIR)
