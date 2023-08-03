// in c++  oops we can reuse a class various times using inheritance and additional features can also be added ...
// reusability of classes saves time and money
// the existing class is called base class
// there can be more than one base class for an inherited class
// the new class which is inherited is called derived class
// SINGLE INHERITANCE ----> one base class and one derived class!!
// MULTIPLE INHERITANCE ---> more than one base class and single derived class!!
// HIERARCHIAL INHERITANCE ---> one base class and multiple derived classes!!
// MULTILEVEL INHERITANCE --> deriving a class from already derived class!!
// HYBRID INHERITANCE --> combination of multiple inheritance and multilevekl inheritance !! or hierarchial + multiple !!
/*
!!only public membetrs of base class can be inherited inn derived class
!! default visbilty mode is private
!! private visibility mode --> public members of base class becomes private members of derived class
!! public visibility mode --> public members of base class becomes public members of derived class
*/
/*
    #   SYNTAX   #

    class {{derived- class - name}} : {{visibility-mode}} {{base-class-name}}
*/

// SINGLE INHERITNACE
#include <iostream>
#include <iomanip>
using namespace std;
class base
{
    int data1; // private by default and is not inheritable
public:        
    int data2;
    int setdata(int, int); // this can be inherited in derived class publically or privately!!
    int getdata1();        // this can be inherited in derived class publically or privately!!
    int getdata2();        // this can be inherited in derived class publically or privately!!
};

int base ::setdata(int x, int y)
{
    data1 = x;
    data2 = y;
}
int base::getdata1()
{
    return data1;
}
int base::getdata2()
{
    return data2;
}
class derived : public base // public members of base class becomes public mem,bers of derived class
{
    int data3; // private by default
public: // includes public of base and additional given by us 
    void process();
    void display();
};
void derived ::process()
{
    data3 = data2 * getdata1(); // because data 2 is public for base and derived can take public values of base but not private value data1 of class base.
} 
void derived ::display()
{
    cout << "THE DATA 1 IS " << getdata1() << " AND FOR DATA 2 IS " << data2 << " GIVING DATA 3 = " << data3 << endl;
}
int main()
{   
    int m;
    int n;
    cout << "ENTER DATA 1 \n";
    cin >> m;
    cout << "ENTER DATA 2 \n";
    cin >> n;
    derived der;
    der.setdata(m, n);
    der.process();
    der.display();
    cout << "\n SUCCESFUL!! \n";
    return 0;
}