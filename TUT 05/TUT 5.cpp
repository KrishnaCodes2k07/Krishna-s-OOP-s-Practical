#include <iostream>
using namespace std;

class Shape {
public:
    // Perimeter of square
    void perimeter(int side) {
        cout << "Perimeter of square = " << 4 * side << endl;
    }

    // Perimeter of rectangle
    void perimeter(int length, int breadth) {
        cout << "Perimeter of rectangle = "
             << 2 * (length + breadth) << endl;
    }
};

int main() {
    Shape s;

    s.perimeter(5);       
    s.perimeter(10, 6);  

    return 0;
}
