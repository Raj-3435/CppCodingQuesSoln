// Ques 1: Define a car class with properties brand name , model, engine, number of seats 
//and method displayInfo that display the all information of class.

#include <iostream>
#include <string>

class Car {
private:
    std::string brandName;
    std::string model;
    std::string engine;
    int numberOfSeats;

public:
    // Constructor to initialize the properties
    Car(std::string brand, std::string model, std::string engine, int seats) {
        brandName = brand;
        this->model = model;
        this->engine = engine;
        numberOfSeats = seats;
    }

    // Method to display car information
    void displayInfo() {
        std::cout << "Brand Name: " << brandName << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Engine: " << engine << std::endl;
        std::cout << "Number of Seats: " << numberOfSeats << std::endl;
    }
};

int main() {
    // Create an object of Car
    Car myCar("Toyota", "Camry", "2.5L 4-cylinder", 5);

    // Display the information of the car
    myCar.displayInfo();

    return 0;
}
