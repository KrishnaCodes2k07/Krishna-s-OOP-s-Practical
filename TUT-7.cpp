#include <iostream>
#include <cstring>
using namespace std;

class String
{
    char *str;

public:

    // Constructor
    String()
    {
        str = new char[100];
        str[0] = '\0';
    }

    // Accept Function
    void Accept()
    {
        cout << "Enter the string = ";
        cin.getline(str, 100);
    }

    // Display Function
    void Display()
    {
        cout << "String is = " << str << endl;
    }

    // Destructor 
    ~String()
    {
        delete[] str;
    }
};

int main() //main function start 
{
    String s;

    s.Accept(); //accepting the string 
    s.Display();//displaying the string 

    return 0;
}
