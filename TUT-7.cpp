#include <iostream>          // Includes input/output functions like cout and cin
#include <cstring>           // Includes string-related functions
using namespace std;         // Allows us to use cout and cin without std::

class String                // Defines a class named String
{
    char *str;              // Declares a character pointer to store the string

public:                     // Makes the following members accessible outside the class

    String()                // Constructor: called automatically when object is created
    {
        str = new char[100]; // Dynamically allocates memory for 100 characters
        str[0] = '\0';       // Initializes the string as empty
    }

    void Accept()            // Defines Accept() function to take input
    {
        cout << "Enter the string = "; // Displays a message to the user
        cin.getline(str, 100);         // Accepts a string including spaces
    }

    void Display()           // Defines Display() function to display the string
    {
        cout << "String is = " << str << endl; // Displays the stored string
    }

    ~String()                // Destructor: called automatically when object is destroyed
    {
        delete[] str;        // Releases the dynamically allocated memory
    }
};

int main()                   // Main function: execution starts here
{
    String s;                // Creates an object 's' and calls the constructor

    s.Accept();              // Calls Accept() to input the string
    s.Display();             // Calls Display() to display the string

    return 0;                // Ends the program successfully
}
