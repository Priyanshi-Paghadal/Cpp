#include <iostream>
#include <vector>
using namespace std;

class BaseVehicle {
public:
    int vehicleID;
    string brand;
    string model;
    float price;

    BaseVehicle(int id, string br, string mo, float pr) : vehicleID(id), brand(br), model(mo), price(pr) {}

    virtual void display() {
        cout << "ID: " << vehicleID << ", Brand: " << brand << ", Model: " << model << ", Price: Rs. " << price;
    }
};

class TwoWheeler : public BaseVehicle {
public:
    string engineCapacity;
    string fuelType;

    TwoWheeler(int id, string br, string mo, float pr, string ec, string ft)
        : BaseVehicle(id, br, mo, pr), engineCapacity(ec), fuelType(ft) {}

    void display() override {
        BaseVehicle::display();
        cout << ", Engine Capacity: " << engineCapacity << ", Fuel Type: " << fuelType << endl;
    }
};
class FourWheeler : public BaseVehicle {
public:
    int seatingCapacity;
    string transmissionType;

    FourWheeler(int id, string br, string mo, float pr, int sc, string tt)
        : BaseVehicle(id, br, mo, pr), seatingCapacity(sc), transmissionType(tt) {}

    void display() override {
        BaseVehicle::display();
        cout << ", Seating Capacity: " << seatingCapacity << ", Transmission Type: " << transmissionType << endl;
    }
};

vector<BaseVehicle*> showroom;

void addVehicle() {
    int id;
    string brand, model, engineCapacity, fuelType;
    float price;

    cout << "Enter Vehicle ID, Brand, Model, Price, Engine Capacity, Fuel Type: ";
    cin >> id >> brand >> model >> price >> engineCapacity >> fuelType;
    showroom.push_back(new TwoWheeler(id, brand, model, price, engineCapacity, fuelType));
    cout << "Vehicle added successfully.\n";
}

void displayVehicles() {
    for (auto& vehicle : showroom) {
        vehicle->display();
    }
}

void searchVehicle() {
    int id;
    cout << "Enter Vehicle ID to search: ";
    cin >> id;
    for (auto& vehicle : showroom) {
        if (vehicle->vehicleID == id) {
            vehicle->display();
            return;
        }
    }
    cout << "Vehicle not found.\n";
}

int main() {
    int choice;

    while (true) {
        // cout << "\nVehicle Showroom Management System\n";
        // cout << "1. Add a new vehicle\n";
        // cout << "2. Display all vehicles\n";
        // cout << "3. Search for a vehicle by ID\n";
        // cout << "4. Exit\n";
        // cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addVehicle();
                break;
            case 2:
                displayVehicles();
                break;
            case 3:
                searchVehicle();
                break;
            case 4:
                cout << "Exiting the program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
