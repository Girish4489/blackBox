# Makefile

# Variables
PROJECT_NAME = blackBox
BUILD_DIR = build
LINUX_BUILD_DIR = $(BUILD_DIR)/linux
WINDOWS_BUILD_DIR = $(BUILD_DIR)/windows
TOOLCHAIN_FILE = toolchain-mingw.cmake
BIN_DIR = bin

# Targets
all: linux windows move_binaries

linux:
	mkdir -p $(LINUX_BUILD_DIR)
	cd $(LINUX_BUILD_DIR) && cmake ../.. && make
	mv $(LINUX_BUILD_DIR)/$(PROJECT_NAME) $(LINUX_BUILD_DIR)/$(PROJECT_NAME).out

windows:
	mkdir -p $(WINDOWS_BUILD_DIR)
	cd $(WINDOWS_BUILD_DIR) && cmake -DCMAKE_TOOLCHAIN_FILE=../../$(TOOLCHAIN_FILE) ../.. && make

move_binaries: linux windows
	mkdir -p $(BIN_DIR)
	mv $(LINUX_BUILD_DIR)/$(PROJECT_NAME).out $(BIN_DIR)/$(PROJECT_NAME).out
	mv $(WINDOWS_BUILD_DIR)/$(PROJECT_NAME).exe $(BIN_DIR)/$(PROJECT_NAME).exe

clean:
	rm -rf $(BUILD_DIR) $(BIN_DIR)

.PHONY: all linux windows move_binaries clean
