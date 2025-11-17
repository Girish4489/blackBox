# Makefile for BlackBox project

.PHONY: all setup build run clean

all: build

setup:
	@echo "Setting up build environment..."
	mkdir -p build
	cd build && cmake ..

build:
	@echo "Building project..."
	cd build && make

run:
	@echo "Running BlackBox..."
	cd build && ./BlackBox

clean:
	@echo "Cleaning build artifacts..."
	rm -rf build
