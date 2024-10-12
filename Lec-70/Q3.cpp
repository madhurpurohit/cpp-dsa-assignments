//* Problem:- Laptop Class:
/* Challenge: Design a Laptop class that represents a portable computer system.

todo Attributes:
brand: String representing the laptop brand and model.
screenSize: Double indicating the screen size in inches.
processor: String specifying the processor type and speed.
ram: Integer representing the available RAM capacity in gigabytes.
storage: Integer representing the storage capacity in gigabytes.
batteryLevel: Double showing the remaining battery percentage.
isOn: Boolean indicating whether the laptop is currently powered on.

todo Methods:
powerOn(): Sets isOn to true and prints a startup message.
powerOff(): Sets isOn to false and prints a shutdown message.
openApps(numApps): Simulates opening a specified number of applications, potentially impacting battery life.
closeApps(numApps): Simulates closing applications, restoring battery life.
charge(amount): Increases the battery level by the specified amount (check for maximum capacity).
printSpecs(): Displays the laptop's brand, screen size, processor, RAM, storage, and battery level.
*/
#include <iostream>
#include <string>
using namespace std;

class Laptop
{
    string brand;
    string processor;
    double screenSize;
    double batteryLevel;
    int ram;
    int storage;
    int runningApps;
    bool isOn;

public:
    Laptop(string brand, string processor, double screenSize, double batteryLevel, int ram, int storage)
    {
        this->brand = brand;
        this->processor = processor;
        this->screenSize = screenSize;
        this->batteryLevel = batteryLevel;
        this->ram = ram;
        this->storage = storage;
        isOn = false;
        runningApps = 0;
    }

    double getBatteryStatus()
    {
        return batteryLevel;
    }

    int getAppsCount()
    {
        return runningApps;
    }

    void updateLaptopStatus(bool value)
    {
        isOn = value;
        batteryLevel = 0;
    }

    void updateAppsCount(int apps)
    {
        runningApps += apps;
    }

    void powerOn()
    {
        if (!isOn)
        {
            isOn = true;
            cout << "Laptop is starting\n";
        }
        else
            cout << "Laptop is already running\n";
    }

    void powerOff()
    {
        if (isOn)
        {
            isOn = false;
            cout << "Laptop is shutting down\n";
        }
        else
            cout << "Laptop is already shutdown\n";
    }

    void openApps(int apps)
    {
        if (isOn)
        {
            batteryLevel -= (apps * 2);
            if (batteryLevel > 0)
            {
                cout << "Opening apps\n";
                cout << endl;
                cout << "Running " << apps << " apps currently.\n";
            }
            else
            {
                cout << "Cannot open apps. Because your battery status is very low\n";
                isOn = false;
            }
        }
        else
            cout << "Laptop is shutdown currently.\n";
    }

    void closeApps(int apps)
    {
        if (isOn)
        {
            batteryLevel -= (runningApps * 1.3);
            if (batteryLevel > 0)
                cout << "Closing " << apps << " apps\n";
            else
            {
                runningApps = 0;
                isOn = false;
            }
        }
        else
            cout << "Laptop is already shutdown\n";
    }

    void charge(int amount)
    {
        const int batteryCapacity = 100;
        if (amount + batteryLevel <= batteryCapacity)
        {
            batteryLevel += amount;
            cout << "Charging. Battery level increased by " << amount << endl;
        }
        else
        {
            batteryLevel = 100;
            cout << "Laptop fully charged.\n";
        }
    }

    void printDetails()
    {
        cout << "Laptop Brand: " << brand << endl;
        cout << "Laptop processor: " << processor << endl;
        cout << "Laptop screen size: " << screenSize << endl;
        cout << "Laptop battery status: " << batteryLevel << endl;
        cout << "Laptop RAM in GB: " << ram << endl;
        cout << "Laptop ROM in GB: " << storage << endl;
    }

    void printStatus()
    {
        batteryLevel = ((batteryLevel > 0) ? batteryLevel : 0);
        cout << "Laptop battery status: " << batteryLevel << endl;
        cout << "Currently running apps: " << runningApps << endl;
        if (batteryLevel == 0)
            cout << "Laptop is shutting down.Please charge your laptop.\n";
    }
};

void getLaptopInfo(Laptop &myLapi)
{
    myLapi.printDetails();
    cout << endl;

    char option;
    cout << "Do you want to check this laptop.(y/n)\n";
    cin >> option;
    if (option == 'y' || option == 'Y')
        myLapi.powerOn();
    else
        return;
    cout << endl;

    int apps;
label:
    cout << "Enter number of apps to open: ";
    cin >> apps;
    myLapi.openApps(apps);
    myLapi.updateAppsCount(apps);
    cout << endl;
    myLapi.printStatus();
    cout << endl;

    cout << "Do you want to open more apps(y/n)\n";
    cin >> option;
    cout << endl;

    if ((option == 'y' || option == 'Y') && myLapi.getBatteryStatus() > 0)
        goto label;
    else if ((option == 'y' || option == 'Y') && myLapi.getBatteryStatus() <= 0)
    {
        cout << "Cannot open apps. Because your laptop is shutdown.\n";
        myLapi.updateLaptopStatus(0);
        cout << endl;
    }

    while (myLapi.getAppsCount() > 0)
    {
        if (myLapi.getBatteryStatus() > 0)
        {
            cout << "Enter number of apps to close: ";
            cin >> apps;
            myLapi.updateAppsCount(-apps);
            myLapi.closeApps(apps);
            cout << endl;
            myLapi.printStatus();
            cout << endl;
        }
        else
            break;
    }

    if (myLapi.getBatteryStatus() <= 5)
    {
        cout << "Charge: ";
        cin >> apps;
        myLapi.charge(apps);
        cout << endl;
    }

    myLapi.printDetails();
    cout << endl;
}

int main()
{
    system("clear");
    Laptop lapi1("Macbook Air M3 Pro", "M4", 13.57, 95.08, 8, 512);
    Laptop lapi2("Lenovo IdeaPad 3", "Intel i7-15400HX", 14.86, 85.8, 16, 1024);

    cout << "1. Apple\n";
    cout << "2. Lenovo\n";
    cout << "Choose one option\n";
    int option;
    cin >> option;
    system("clear");

    if (option == 1)
        getLaptopInfo(lapi1);
    else
        getLaptopInfo(lapi2);

    return 0;
}