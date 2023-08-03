#include <iostream>
#include <iomanip>
using namespace std;
class data
{
    int real, imaginery;

public:
    void setdata(int a, int b)
    {
        real = a;
        imaginery = b;
    }
    void getdata()
    {
        cout << "THE REAL PART IS " << real << endl;
        cout << "THE imaginery PART IS " << imaginery << endl;
    }
};
int main()
{
    // we will declare class object in a pointer p
    data d; // object d is created for class data
    // data *p = &d; //pointer p is created which stores the address of object d of class data
    data *p = new data; // we can use this also in place of *p=d
    //(*p).setdata(2, 34); //we used dereferencing to get the value of d which is stored in pointer p
    p->setdata(2, 34); // we can also use arrow operator instead of using *p.setdata || the arrow is used to dereference the pointer p
    (*p).getdata();
    return 0;
}