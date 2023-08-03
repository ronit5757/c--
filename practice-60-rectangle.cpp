#include <iostream>
#include <iomanip>
using namespace std;
class rectangle
{
    int height;

public:
    int length;
    void getdata(int h, int l)
    {
        height = h;
        length = l;
    }
    int getdatah()
    {
        return height;
    }
    int getdatal()
    {
        return length;
    }
    void displaydata()
    {
        cout << "HEIGHT IS " << height << " LENGTH IS " << length << endl;
    }
};
class rectanglearea : public rectangle
{
    int area;

public:
    
    void Area() 
    {
        area = getdatah() * getdatal();
    }
    void display()
    {
        cout << "area is = " << area << endl;
    }
};
int main() 
{
    int x, y;
    cout << "enter height " << endl;
    cin >> x;
    cout << "\n enter length " << endl;
    cin >> y;
    rectanglearea r1;
    r1.getdata(x, y);
    r1.getdatal();
    r1.displaydata(); 
    r1.Area();
    r1.display();
    return 0;
} 