#include <iostream>
#include <iomanip>
using namespace std;
// function  overloading is concept of using same name function for different roles

// vol of cylinder
double volume(int r, int h)
{
    return (3.14 * r * r * h);
}
// volume of cuboid
int volume(int l, int b, int h)
{
    return (l * b * h);
}
// volume of cube
int volume(int a)
{
    return (a * a * a);
}

int main()
{
    int a;
    int h;
    int r;
    int l;
    int b;
    cout << "!!!FOR CUBE!!!" << endl;
    cout << "enter side of cube ... \n";
    cin >> a;
    cout << "\n volume of cube is ...\n"
         << volume(a) << endl;
    cout << endl;
    cout << "!!!FOR CUBOID!!!";
    cout << "\nenter length \n";
    cin >> l;
    cout << "\n enter breadth \n";
    cin >> b;
    cout << "\n enter height \n";
    cin >> h;
    cout << "the volume of cuboid is..=" << volume(l, b, h);

    cout << endl;
    cout << "!!!FOR CYLINDER!!!";
    cout << "\n enter radius.. \n";
    cin >> r;
    cout << endl;
    cout << "enter height.. \n";
    cin >> h;
    cout << "the volume of cylinder..=" << volume(r, h) << endl;
    return 0;
}