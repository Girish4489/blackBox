# Makefile

# Variables
PROJECT_NAME = blackBox
BUILD_DIR = build
LINUX_BUILD_DIR = $(BUILD_DIR)/linux
WINDOWS_BUILD_DIR = $(BUILD_DIR)/windows
TOOLCHAIN_FILE = toolchain-mingw.cmake
BIN_DIR = bin

# Targets
all: check_prerequisites linux windows

check_prerequisites:
	@echo "Checking prerequisites..."
	@command -v cmake >/dev/null 2>&1 || { echo >&2 "Error: CMake is not installed. Please install it to proceed."; exit 1; }
	@command -v make >/dev/null 2>&1 || { echo >&2 "Error: Make is not installed. Please install it to proceed."; exit 1; }
	@command -v g++ >/dev/null 2>&1 || { echo >&2 "Error: g++ (GCC C++ compiler) is not installed. Please install it to proceed."; exit 1; }
	@echo "All core prerequisites are met."

linux: check_prerequisites
	@echo "Building for Linux..."
	cmake -S . -B $(LINUX_BUILD_DIR)
	cmake --build $(LINUX_BUILD_DIR)
	@echo "Moving Linux binary to $(BIN_DIR)..."
	mkdir -p $(BIN_DIR)
	mv $(LINUX_BUILD_DIR)/$(PROJECT_NAME) $(BIN_DIR)/$(PROJECT_NAME).out

windows: check_prerequisites
	@echo "Building for Windows..."
	@command -v x86_64-w64-mingw32-g++ >/dev/null 2>&1 || { echo >&2 "Error: MinGW-w64 (x86_64-w64-mingw32-g++) is not installed. Please install it for Windows cross-compilation (e.g., sudo apt-get install gcc-mingw-w64 g++-mingw-w64)."; exit 1; }
	cmake -S . -B $(WINDOWS_BUILD_DIR) -DCMAKE_TOOLCHAIN_FILE=$(TOOLCHAIN_FILE)
	cmake --build $(WINDOWS_BUILD_DIR)
	@echo "Moving Windows binary to $(BIN_DIR)..."
	mkdir -p $(BIN_DIR)
	mv $(WINDOWS_BUILD_DIR)/$(PROJECT_NAME).exe $(BIN_DIR)/$(PROJECT_NAME).exe

clean:
	@echo "Cleaning build and bin directories..."
	rm -rf $(BUILD_DIR) $(BIN_DIR)

.PHONY: all linux windows clean
