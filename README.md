# Black Box

[![License](https://img.shields.io/badge/license-AGPL--3.0-blue.svg)](https://www.gnu.org/licenses/agpl-3.0.html)

The BlackBox project aims to develop a system for recording important data and events during the operation of a vehicle. Similar to black boxes used in aviation, these devices in automobiles are often called Event Data Recorders (EDRs) or Crash Data Recorders (CDRs). They capture and store crucial information that can help understand vehicle performance and the circumstances leading to incidents.

## Table of Contents

- [Purpose](#purpose)
- [Data Collected](#data-collected)
- [Project Structure](#project-structure)
- [Installation and Running](#installation-and-running)
- [Contributing](#contributing)
- [License](#license)

## Purpose

The primary goal of the BlackBox is to:

- Record data such as vehicle speed, acceleration, braking, and other critical parameters.
- Aid in accident reconstruction and investigations.
- Identify potential issues or malfunctions in the vehicle.
- Improve overall vehicle safety.

## Data Collected

The BlackBox system captures and stores the following data:

- Vehicle speed
- Engine RPM
- Throttle position
- Brake usage
- Seatbelt status
- Airbag deployment
- Other relevant vehicle parameters

## Project Structure

The project is organized into several components, including sensor management, data logging, and communication interfaces. Each component is responsible for specific tasks, such as reading sensor data, logging it, and handling communication protocols.

#### The project is organized into the following directories

```file tree
blackBox/
├── lib/
│   ├── communication/
│   ├── data/
│   ├── hardwareAbstractionLayer/
│   ├── sensor/
├── main.cpp
├── CMakeLists.txt
├── Makefile
├── toolchain-mingw.cmake
├── LICENSE
```

## Installation and Running

#### Prerequisites

- CMake (version 3.28.3 or higher)
- C++ compiler
- Make
- GCC (for Linux builds)
- MinGW (for Windows builds on Linux)

#### To Clone and Run the Project, Follow these steps

1. Clone the [repository](https://github.com/Girish4489/blackBox.git) using the following command in the terminal:

```bash
git clone "https://github.com/Girish4489/blackBox.git"
```

2. Change the directory to the project directory:

```bash
cd blackBox
```

3. Build the project using the following command:

```bash
make
```

4. Clean the build by make

```bash
make clean
```

5. Run the executable:

```bash
# for windows
./bin/blackBox.exe

# for linux
./bin/blackbox.out
```

## Contributing

Contributions are welcome! Please fork the repository and submit pull requests with your improvements.

## License

This project is open source and available under the [AGPL-3.0 license](LICENSE).
