
#include <iostream>
#include <string>
using namespace std;

// Base class 1: Stores employee basic information
class Employee {
public:
    int id;
    string name;
    float Salary;

    // Function to input employee details
    void getEmployee() {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Name of Employee: ";
        cin >> name;

        cout << "Enter Salary of Employee: ";
        cin >> Salary;
    }
};

// Base class 2: Stores working-hours information
class workingHours {
public:
    int hours;
    float rate;

    // Function to input working hours and overtime rate
    void getHours() {
        cout << "Enter Working Hours: ";
        cin >> hours;

        cout << "Enter Overtime Rate per Hour: ";
        cin >> rate;
    }
};

// Derived class: Inherits from both Employee and workingHours
// This demonstrates multiple inheritance
class Details : public Employee, public workingHours {
public:
    void display() {
        int overtime;
        float payment;

        // Calculate overtime hours (normal hours = 40)
        overtime = (hours > 40) ? hours - 40 : 0;

        // Calculate overtime payment
        payment = overtime * rate;

        // Display employee details and overtime payment
        cout << "\n--- Employee Details ---";
        cout << "\nEmployee ID: " << id;
        cout << "\nEmployee Name: " << name;
        cout << "\nBasic Salary: " << Salary;
        cout << "\nWorking Hours: " << hours;
        cout << "\nOvertime Hours: " << overtime;
        cout << "\nOvertime Payment: " << payment << endl;
    }
};

int main() {
    // Create an object of the derived class
    Details e;

    // Input employee and working-hours information
    e.getEmployee();
    e.getHours();

    // Display details and calculate overtime payment
    e.display();

    return 0;  // End of program
}

