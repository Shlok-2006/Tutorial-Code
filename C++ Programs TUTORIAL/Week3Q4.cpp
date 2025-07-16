#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    float price;
    int year;
    static int totalCars;

public:
    Car(string b, string m, float p, int y) {
        brand = b;
        model = m;
        price = p;
        year = y;
        totalCars++;
    }

    void displayCarInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
        cout << "Year: " << year << endl;
    }

    static void displayTotalCars() {
        cout << "Total Cars in Inventory: " << totalCars << endl;
    }
};

int Car::totalCars = 0;

int main() {
    Car car1("Toyota", "Camry", 30000, 2022);
    Car car2("Honda", "Civic", 25000, 2021);
    Car car3("Ford", "Mustang", 55000, 2023);

    cout << "Car Inventory Details:\n";
    car1.displayCarInfo();
    cout << "-------------------------" << endl;
    car2.displayCarInfo();
    cout << "-------------------------" << endl;
    car3.displayCarInfo();
    cout << "-------------------------" << endl;
    
    Car::displayTotalCars();
    
    return 0;
}
