#include <iostream>
#include <iomanip> // for std::setprecision

using namespace std;

// Constants
const double PI = 3.14159;

// Function prototypes
void calculateCircleArea();
void calculateRectangleArea();
void calculateTriangleArea();

int main() {
    int choice;

    do {
        // Display menu
        cout << "Geometry Calculator\n";
        cout << "1. Calculate the Area of a Circle\n";
        cout << "2. Calculate the Area of a Rectangle\n";
        cout << "3. Calculate the Area of a Triangle\n";
        cout << "4. Quit\n";
        cout << "Enter your choice (1–4): ";
        cin >> choice;

        // Validate the menu choice
        while (choice < 1 || choice > 4) {
            cout << "Invalid choice. Please enter a number between 1 and 4: ";
            cin >> choice;
        }

        // Perform the selected calculation
        switch (choice) {
        case 1:
            calculateCircleArea();
            break;
        case 2:
            calculateRectangleArea();
            break;
        case 3:
            calculateTriangleArea();
            break;
        case 4:
            cout << "Exiting program. Goodbye!" << endl;
            break;
        }

        cout << endl;

    } while (choice != 4);

    return 0;
}

// Function to calculate the area of a circle
void calculateCircleArea() {
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Validate radius
    while (radius < 0) {
        cout << "Invalid radius. Please enter a positive value: ";
        cin >> radius;
    }

    double area = PI * radius * radius;
    cout << fixed << setprecision(2);
    cout << "The area of the circle is: " << area << endl;
}

// Function to calculate the area of a rectangle
void calculateRectangleArea() {
    double length, width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    // Validate length
    while (length < 0) {
        cout << "Invalid length. Please enter a positive value: ";
        cin >> length;
    }

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Validate width
    while (width < 0) {
        cout << "Invalid width. Please enter a positive value: ";
        cin >> width;
    }

    double area = length * width;
    cout << fixed << setprecision(2);
    cout << "The area of the rectangle is: " << area << endl;
}

// Function to calculate the area of a triangle
void calculateTriangleArea() {
    double base, height;

    cout << "Enter the base of the triangle: ";
    cin >> base;

    // Validate base
    while (base < 0) {
        cout << "Invalid base. Please enter a positive value: ";
        cin >> base;
    }

    cout << "Enter the height of the triangle: ";
    cin >> height;

    // Validate height
    while (height < 0) {
        cout << "Invalid height. Please enter a positive value: ";
        cin >> height;
    }

    double area = 0.5 * base * height;
    cout << fixed << setprecision(2);
    cout << "The area of the triangle is: " << area << endl;
}