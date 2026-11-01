#include <iostream>
using namespace std;

// Function template to find the smaller of two values
template <class T>
T minimum(T a, T b)
{
    return (a < b) ? a : b;
}

// Class template to store two values and show their sum
template <class T>
class Pair
{
    T first, second;
public:
    // Constructor to initialize both values
    Pair(T f, T s)
    {
        first = f;
        second = s;
    }
    // Function to display the sum of the two values
    void showSum()
    {
        cout << "Sum = " << first + second << endl;
    }
};

int main()
{
    int a, b, n1, n2;
    float x, y, d1, d2;

    // Function template with integer values
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Minimum Integer = " << minimum(a, b) << endl;

    // Function template with float values
    cout << "Enter two decimal values: ";
    cin >> x >> y;
    cout << "Minimum Float = " << minimum(x, y) << endl;

    // Class template with integer values
    cout << "Enter two integers for Pair: ";
    cin >> n1 >> n2;
    Pair<int> p1(n1, n2);
    p1.showSum();

    // Class template with float values
    cout << "Enter two decimal values for Pair: ";
    cin >> d1 >> d2;
    Pair<float> p2(d1, d2);
    p2.showSum();

    return 0;
}
