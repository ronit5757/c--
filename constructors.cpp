#include <iostream>
#include <iomanip>
using namespace std;
// constructors are the special member functions with name same that of class
// they are used to initialize the objects of a class
// it is automatically invoked whenever an object is created
// constructor should be declared in public section of class
// used insteaDd of setvalue() which stores values v1 and v2 in a and b respectively

class complex2; // forward declaration
class complex
{
private:
    int a, b;

public:
    complex(void); // declaration of constructor
    void printdata(void)
    {

        cout << "number is " << a << " + " << b << "i " << endl;
    }
    friend void add(complex, complex2);
};

complex ::complex(void)
{
    a = 10;
    b = 4;
    cout << "\n number 1 \n";
}
class complex2
{
    int x, y;

public:
    complex2(void); // declaration of constructor 2
    void printdata2(void)
    {
        cout << "number is " << x << " + " << y << "i " << endl;
    }
    friend void add(complex, complex2);
};

complex2 ::complex2(void)
{
    x = 2;
    y = 3;
    cout << "\n number 2 \n";
}

void add(complex v1, complex2 v2)
{
    cout << "total is " << (v1.a + v2.x) << " + " << (v1.b + v2.y) << "i" << endl;
}
int main()
{
    complex c1;
    c1.printdata();
    complex2 c2;
    c2.printdata2(); // constructor will be automatically invoked for object c and its values a and b

    cout<<"\n";

    add(c1,c2); 
    return 0; 
}    