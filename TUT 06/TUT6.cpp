#include <iostream>
using namespace std;
// Class Definition: acts as a blueprint for complex numbers
class complex{
float real,imag;//private data mmebers 
 public:
    //member function to defMember function to take user input for real and imaginary part
    cout<<"Enter the real part =";
    cin>>real;
    cout<<"Enter the imaginary part =";
    cin>>imag;
}
   // Overloading the prefix unary '++' operator
    // Called when writing '++object;'
void operator++(){
    ++real;// Increment real component by 1
    ++imag;// Increment imaginary component by 1
}
// Member function to print the complex number in 'a + bi' format
     void display()
{
    cout<<real<<"+"<<imag<<"i"<<endl;
}
}; 
int main()
{  
    // Create an object 'c' of class Complex
   complex c;
    c.getData();
   cout<<"Before incremant =";
    c.display();
    ++c;// Call the overloaded operator++ function on object 'c'
    cout<<"After increment =";
    c.display();
    
    return 0;
}
