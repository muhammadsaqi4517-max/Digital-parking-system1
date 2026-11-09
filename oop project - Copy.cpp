#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string number;
    int hours;
    int slot;   // ?? slot number

public:
    Vehicle(string num, int h, int s) {
        number = num;
        hours = h;
        slot = s;
    }

    virtual int calculateFee() = 0;

    void showInfo() {
        cout << "Vehicle Number: " << number << endl;
        cout << "Hours: " << hours << endl;
        cout << "Slot: " << slot << endl;
    }

    virtual ~Vehicle() {}
};


// ?? Car Class
class Car : public Vehicle {
public:
    static int totalCars;
    static int totalFee;

    Car(string num, int h, int s) : Vehicle(num, h, s) {
        totalCars++;
    }

    int calculateFee() override {
        int fee = hours * 50;
        totalFee += fee;   // ?? add to total fee
        return fee;
    }
};

int Car::totalCars = 0;
int Car::totalFee = 0;


// ?? Bike Class
class Bike : public Vehicle {
public:
    static int totalBikes;
    static int totalFee;

    Bike(string num, int h, int s) : Vehicle(num, h, s) {
        totalBikes++;
    }

    int calculateFee() override {
        int fee = hours * 20;
        totalFee += fee;   // ?? add to total fee
        return fee;
    }
};

int Bike::totalBikes = 0;
int Bike::totalFee = 0;


// ?? Parking System
class ParkingSystem {
    int totalSlots;
    int occupiedSlots;

public:
    ParkingSystem(int slots) {
        totalSlots = slots;
        occupiedSlots = 0;
    }

    bool hasSpace() {
        return occupiedSlots < totalSlots;
    }

    int parkVehicle() {
        if (hasSpace()) {
            occupiedSlots++;
            cout << "Vehicle Parked!\n";
            return occupiedSlots;   // ?? return slot number
        } else {
            cout << "Parking Full!\n";
            return -1;
        }
    }

    void showStatus() {
        cout << "\nTotal Slots: " << totalSlots << endl;
        cout << "Occupied: " << occupiedSlots << endl;
        cout << "Free: " << totalSlots - occupiedSlots << endl;

        cout << "Total Cars: " << Car::totalCars << endl;
        cout << "Total Bikes: " << Bike::totalBikes << endl;

        cout << "Total Car Fee: " << Car::totalFee << endl;
        cout << "Total Bike Fee: " << Bike::totalFee << endl;
        cout << "Overall Fee: " << Car::totalFee + Bike::totalFee << endl;
    }
};


// ?? Main
int main() {
    ParkingSystem p(10);
    int choice;

    do {
        cout << "\n1. Park Car\n2. Park Bike\n3. Status\n0. Exit\n";
        cin >> choice;

        if (choice == 1) {
            if (!p.hasSpace()) {
                cout << "Parking Full!\n";
                continue;
            }

            string num;
            int h;

            cout << "Enter Car Number: ";
            cin >> num;

            cout << "Enter Hours: ";
            cin >> h;

            int slot = p.parkVehicle();

            Car c(num, h, slot);

            c.showInfo();
            cout << "Fee: " << c.calculateFee() << endl;
        }

        else if (choice == 2) {
            if (!p.hasSpace()) {
                cout << "Parking Full!\n";
                continue;
            }

            string num;
            int h;

            cout << "Enter Bike Number: ";
            cin >> num;

            cout << "Enter Hours: ";
            cin >> h;

            int slot = p.parkVehicle();

            Bike b(num, h, slot);

            b.showInfo();
            cout << "Fee: " << b.calculateFee() << endl;
        }

        else if (choice == 3) {
            p.showStatus();
        }

    } while (choice != 0);

    return 0;
}