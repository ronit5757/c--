#include <iostream>
#include <iomanip>
using namespace std;
// multiple constructors for diffrent arguments types
//  the constructor that matches the argument type in main will be executed
class complex
{
    int x, y;

public:
    complex(int a, int b) // parametrized constructor 1 is created!!
    {
        x = a;
        y = b;
    }

    complex(int a) // parametrized constructor 2 is created !!
    {
        x = a;
        y = 0;
    }

    void printnum() // member function for class complex is created!!
    {
        cout << "THE NUMBER IS " << x << " + " << y << "i" << endl;
    }
};
int main()
{
    // driver program is entered in int main()!!
    cout << "THIS IS USING CONSTRUCTOR TYPE 2 \n";
    complex c1(3);
    c1.printnum();

    cout << "THIS IS USING CONSTRUCTOR TYPE 1 \n";
    complex c2(2, 3);
    c2.printnum();

    return 0;
}     