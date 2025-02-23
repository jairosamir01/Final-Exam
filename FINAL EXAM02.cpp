#include <iostream>
#include <string>
using namespace std;

struct MedicalDevice {
    string name;
    string status;
    int serviceDue;
};

void displayDevices(MedicalDevice devices[], int n) {
    cout << "List of all devices:\n";
    for (int i = 0; i < n; i++) {
        cout << "Device: " << devices[i].name << endl;
        cout << "Status: " << devices[i].status << endl;
        cout << "Next service in " << devices[i].serviceDue << " days\n";
        cout << "----------------------------------\n";
    }
}

void addDevice(MedicalDevice devices[], int &n) {
    cout << "Enter device name: ";
    cin >> devices[n].name;
    cout << "Enter device status (working/needs repair): ";
    cin >> devices[n].status;
    cout << "Enter number of days until next service: ";
    cin >> devices[n].serviceDue;
    n++;
}

void updateDeviceStatus(MedicalDevice devices[], int n) {
    string name;
    cout << "Enter the name of the device to update status: ";
    cin >> name;
    
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (devices[i].name == name) {
            found = true;
            cout << "Enter new status for the device (working/needs repair): ";
            cin >> devices[i].status;
            cout << "Enter number of days until next service: ";
            cin >> devices[i].serviceDue;
            break;
        }
    }
    
    if (!found) {
        cout << "Device not found.\n";
    }
}

int main() {
    const int maxDevices = 10;
    MedicalDevice devices[maxDevices];
    int n = 0;

    int choice;
    
    do {
        cout << "Menu:\n";
        cout << "1. Add new device\n";
        cout << "2. Update device status\n";
        cout << "3. Display all devices\n";
        cout << "4. Exit\n";
        cout << "Enter operation number: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (n < maxDevices) {
                    addDevice(devices, n);
                } else {
                    cout << "Maximum number of devices reached.\n";
                }
                break;
            case 2:
                updateDeviceStatus(devices, n);
                break;
            case 3:
                displayDevices(devices, n);
                break;
            case 4:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}