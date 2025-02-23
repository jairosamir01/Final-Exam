# Medical Device Management System

## Overview
This program is a simple Medical Device Management System written in C++. It allows users to add new medical devices, update their status, and display a list of all devices along with their service schedules.

## Features
- Add a New Device: Users can enter details such as device name, status, and service due date.
- Update Device Status: Users can update the status and next service date of an existing device.
- Display All Devices: Lists all stored medical devices with their current status and service schedule.
- Simple Menu Interface: Users interact with the system through a console-based menu.

## Usage Instructions
1. Compile the Program
   shell
sh
   g++ -o medical_device_manager medical_device_manager.cpp
2. Run the Program
   
sh
   ./medical_device_manager

3. Follow the On-Screen Menu:
   - Press 1 to add a new device.
   - Press 2 to update an existing device's status.
   - Press 3 to display all devices.
   - Press 4 to exit the program.

## Limitations
- Supports a maximum of 10 devices.
- Device names must be entered without spaces.
- The program does not persist data after exiting.

## Future Improvements
- Implement file handling to save and load device data.
- Enhance input validation for better error handling.
- Allow searching for devices by partial names.

This program was developed as a simple medical device tracking system using C++.
