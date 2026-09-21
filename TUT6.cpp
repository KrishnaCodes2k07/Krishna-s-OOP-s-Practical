#include <iostream>
using namespace std;
class complex{
float real,imag;
 public:
void getData(){
    cout<<"Enter the real part =";
    cin>>real;
    cout<<"Enter the imaginary part =";
    cin>>imag;
}
void operator++(){
    ++real;
    ++imag;
}
     void display()
{
    cout<<real<<"+"<<imag<<"i"<<endl;
}
}; 
int main()
{  
   complex c;
    c.getData();
   cout<<"Before incremant =";
    c.display();
    ++c;
    cout<<"After increment =";
    c.display();
    
    return 0;
}
