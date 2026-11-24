// CarpetCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <iostream>
#include <iomanip>
#include  "Feetlnches.h"
#include "RoomDimension.h"
#include "RoomCarpet.h"

using namespace std;

int main()
{
    int feet, inches;
    double carpetPrice;

    cout << "====================================" << endl;
    cout << "       WESTFIELD CARPET COMPANY" << endl;
    cout << "          CARPET CALCULATOR" << endl;
    cout << "====================================" << endl;

    // Get room length
    cout << "\nEnter room length in feet: ";
    cin >> feet;

    cout << "Enter room length in inches: ";
    cin >> inches;

    if (!cin || feet < 0 || inches < 0)
    {
        cout << "Invalid length. Values cannot be negative."
            << endl;
        return 1;
    }

    FeetInches length(feet, inches);

    // Get room width
    cout << "\nEnter room width in feet: ";
    cin >> feet;

    cout << "Enter room width in inches: ";
    cin >> inches;

    if (!cin || feet < 0 || inches < 0)
    {
        cout << "Invalid width. Values cannot be negative."
            << endl;
        return 1;
    }

    FeetInches width(feet, inches);

    // Get carpet price
    cout << "\nEnter carpet price per square foot: $";
    cin >> carpetPrice;

    if (!cin || carpetPrice <= 0)
    {
        cout << "Invalid price. Price must be greater than zero."
            << endl;
        return 1;
    }

    // Demonstrate copy constructor
    FeetInches copiedLength(length);

    cout << "\n--- Copy Constructor Test ---" << endl;
    cout << "Original length: " << length << endl;
    cout << "Copied length:   " << copiedLength << endl;

    // Test independence of copied object
    copiedLength.setFeet(copiedLength.getFeet() + 1);

    cout << "After changing the copied object:" << endl;
    cout << "Original length: " << length << endl;
    cout << "Copied length:   " << copiedLength << endl;

    // Test multiplication operator separately
    cout << "\n--- Multiplication Operator Test ---" << endl;

    double lengthInFeet = length.getFeet() + length.getInches() / 12.0;

    double widthInFeet = width.getFeet() + width.getInches() / 12.0;

    double testArea = lengthInFeet * widthInFeet;

    cout << "Length: " << length << endl;
    cout << "Width:  " << width << endl;
    cout << "Test area: " << testArea
        << " square feet" << endl;

    // Create RoomDimension object
    RoomDimension room(length, width);

    // Create RoomCarpet object
    RoomCarpet carpet(room, carpetPrice);

    // Display final information
    cout << "\n====================================" << endl;
    cout << "           CARPET ESTIMATE" << endl;
    cout << "====================================" << endl;

    cout << fixed << setprecision(2);

    cout << "Room Length: " << room.getLength() << endl;
    cout << "Room Width:  " << room.getWidth() << endl;

    cout << "Room Area: "
        << room.getArea()
        << " square feet" << endl;

    cout << "Carpet Price: $"
        << carpet.getCarpetPrice()
        << " per square foot" << endl;

    cout << "Total Carpet Cost: $"
        << carpet.getTotalCost() << endl;

    cout << "====================================" << endl;

    return 0;
}
