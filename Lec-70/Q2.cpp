//* Problem:- Car Class:
/* Challenge: Create a Car class that simulates the behavior of a vehicle.

todo Attributes:
model: String representing the car model name.
year: Integer indicating the car's manufacturing year.
fuelLevel: Double representing the remaining fuel quantity (percentage or liters).
speed: Integer representing the current speed in kilometers per hour.
isRunning: Boolean indicating whether the car is currently running.

todo Methods:
startEngine(): Sets isRunning to true and prints a starting message.
stopEngine(): Sets isRunning to false and prints a stopping message.
accelerate(amount): Increases the car's speed by the specified amount (check engine state and fuel level).
brake(amount): Decreases the car's speed by the specified amount (ensure speed doesn't become negative).
refuel(amount): Increases the fuel level by the specified amount (check for tank capacity).
printStatus(): Displays the car's model, speed, fuel level, and running state.
*/
#include <iostream>
#include <string>
using namespace std;

class Car
{
    string model;
    double fuelLevel;
    int year;
    int speed;
    int tankCapacity;
    bool isRunning;

public:
    Car(string model, double fuelLevel, int year)
    {
        this->model = model;
        this->fuelLevel = fuelLevel;
        this->year = year;
        this->speed = 0;
        this->isRunning = false;
    }

    // Get fuel current status.
    double getFuelStatus()
    {
        return fuelLevel;
    }

    // Get current speed status.
    int getSpeedStatus()
    {
        return speed;
    }

    // Update speed if fuel is not sufficient.
    void updateSpeed()
    {
        speed = 0;
        fuelLevel = 0;
    }

    // Method to start the engine.
    void startEngine()
    {
        if (!isRunning && fuelLevel > 0)
        {
            isRunning = true;
            cout << "Engine is on, Ready to go.\n";
        }
        else
        {
            cout << "Can not start the engine check fuel level or engine state\n";
        }
    }

    // Method to stop the engine.
    void stopEngine()
    {
        if (isRunning)
        {
            isRunning = false;
            cout << "Engine stopped, Have a great day\n";
        }
        else
        {
            cout << "Engine is already stopped\n";
        }
    }

    // Method to accelerate.
    void accelerate(int amount)
    {
        if (isRunning && fuelLevel > 0)
        {
            speed += amount;
            fuelLevel -= (speed / 10);
            cout << "Accelerated to speed " << speed << " km/h.\n";
        }
        else
        {
            cout << "Can not accelerate. Check fuel level or engine state.\n";
        }
    }

    // Method to break.
    void breaks(int amount)
    {
        if (isRunning && fuelLevel > 0)
        {
            speed -= amount;
            if (speed < 0)
                speed = 0;
            cout << "Braked to " << speed << " km/h\n";
        }
        else
            cout << "Cannot brake. Engine is not running.\n";
    }

    // Method to refuel.
    void refuel(double amount)
    {
        const double capacity = 50.00;
        if ((fuelLevel + amount) <= tankCapacity)
        {
            fuelLevel += amount;
            cout << "Refueled. Current fuel level: " << fuelLevel << " liters.\n";
        }
        else
        {
            fuelLevel = 50;
            cout << "Cannot refuel. Tank capacity is exceeded.\n";
        }
    }

    // Car details
    void printDetails() const
    {
        cout << "Car Model: " << model << endl;
        cout << "Car manufacturing year: " << year << endl;
        cout << "Current speed: " << speed << " km/h\n";
        cout << "Current fuel level: " << fuelLevel << " liters\n";
        cout << "Engine state: " << (isRunning ? "Running\n" : "Stopped\n");
    }

    void printStatus()
    {
        cout << "Current speed: " << speed << " km/h\n";
        cout << "Current fuel level: " << fuelLevel << " liters\n";
    }
};

void getCarInfo(Car &myCar)
{
    myCar.printDetails();
    cout << endl;

    cout << "Do you want test drive of this car(y/n)\n";
    char drive;
    int amount;
    double fuel;
    cin >> drive;
    cout << endl;

    if (drive == 'Y' || drive == 'y')
    {
        myCar.startEngine();
        cout << endl;
    }

label:
    cout << "Accelerate: ";
    cin >> amount;
    myCar.accelerate(amount);
    cout << endl;
    cout << "Do you want to more accelerate it(y/n)\n";
    cin >> drive;
    if ((drive == 'y' || drive == 'Y') && myCar.getFuelStatus() > 0)
        goto label;
    else if ((drive == 'y' || drive == 'Y') && myCar.getFuelStatus() <= 0)
    {
        cout << "You do not have sufficient fuel so please refuel it.\n";
        myCar.updateSpeed();
        cout << endl;
    }

    if (myCar.getFuelStatus() > 0)
    {
        cout << "Break: ";
        cin >> amount;
        myCar.breaks(amount);
        cout << endl;
    }

    cout << "Car current status\n";
    myCar.printStatus();
    cout << endl;

    if (myCar.getFuelStatus() == 0)
    {
        cout << "Refuel: ";
        cin >> fuel;
        myCar.refuel(fuel);
        cout << endl;
        cout << "Do you want to drive more(y/n)\n";
        cin >> drive;
        if (drive == 'y' || drive == 'Y')
            goto label;
        cout << endl;
    }

    if (myCar.getSpeedStatus() > 0)
        myCar.updateSpeed();

    cout << "Parked.\n";
    myCar.stopEngine();
    cout << endl;

    cout << "Car current status\n";
    myCar.printDetails();
    cout << endl;
}

int main()
{
    system("clear");
    Car vehicle1("Swift", 5.24, 2018);
    Car vehicle2("Rolls Royce", 10.57, 2012);

    cout << "Choose a Car Model\n";
    cout << "1. Swift\n";
    cout << "2. Rolls Royce\n";

    int option;
    cout << "Enter option here: ";
    cin >> option;
    system("clear");

    getCarInfo((option == 1) ? vehicle1 : vehicle2);

    return 0;
}