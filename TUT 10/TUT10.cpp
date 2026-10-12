#include <iostream>
using namespace std;

int main() {
    char ch;
    cout<<"Enetr the character :";
        cin>>ch;
    try{
        //Throw the character as an exception
        throw ch;
    }
        catch (char c){
            //Catching and handling character 
            cout<<"Exception Caught :"<< c <<endl;
            }
    return 0;
}
