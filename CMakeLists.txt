cmake_minimum_required(VERSION 3.28.3)

# Project name
project(BlackBox)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add source files
set(SOURCES
    main.cpp
    lib/sensor/accelerometer.cpp
    lib/sensor/gps.cpp
    lib/sensor/gyroscope.cpp
    lib/sensor/sensor_manager.cpp
    lib/data/data_logger.cpp
    lib/communication/communication_manager.cpp
    lib/communication/can.cpp
    lib/communication/uart.cpp
    lib/communication/spi.cpp
    lib/hardwareAbstractionLayer/hal.cpp
    lib/hardwareAbstractionLayer/adc.cpp
    lib/hardwareAbstractionLayer/gpio.cpp
    lib/hardwareAbstractionLayer/timer.cpp
)

# Add executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Include directories
include_directories(
    lib/sensor
    lib/data
    lib/communication
    lib/hardwareAbstractionLayer
)
