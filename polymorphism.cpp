// it mean one name taking different forms or performing different functions
// example--> function overloading
// IT IS OF TWO TYPES -->
// (A)compile time polymorphism
//  which function to be used decided on compile time only and is also called static binding or eraly binding
//  it is further achieved using 2 types >
//      (1) FUNCTION OVERLOADING  (2)OPERATOR OVERLOADING
// (B)run time polymorphism
//  which function to be run is known in compile time as compiler deffer(increase too long) the deciding time
// achieved using this ne method -->
//      (1)VIRTUAL FUNCTIONS
#include <iostream>
#include <iomanip>
using namespace std;
class base
{
public:
    int var_base;
    void display()
    {
        cout << "THE VALUE OF VAR_BASE IS " << var_base;
    }
};
class derived : public base
{
public:
    int var_derived;
    void display()
    {
        cout << "THE VALUE OF VAR_BASE IS " << var_base << endl;
        cout << "THE VALUE OF derived_BASE IS " << var_derived << endl;
    }
};
int main()
{
    base *base_class_pointer; // pointer for base class is created which points the base class objects
    derived *derived_class_pointer;
    base obj1;    // base class object is created
    derived obj2; // derived class object is created
    // base_class_pointer = & obj2; // base class pointer is now pointed to address of derived class object
    derived_class_pointer = &obj2; // now derived class pointer is pointed to address of derived class object

    // base_class_pointer->var_base = 34; // here base class pointer is pointing var base
    // base_class_pointer->display(); //although we pointed base class pointer to derived class object but it will only show display of base class
    // base_class_pointer->var_derived = 134; (we cant do this using base class pointer)
    // we can only have access to the properties which are inherited from base class ... by using base class pointer
    derived_class_pointer->var_derived = 134; // but we can do this
    derived_class_pointer->var_base = 35;     // we can also do this as var_base is publically inherited to derived class
    derived_class_pointer->display();         // now we can get display function of derived class called
    return 0; 
} // this is example of late binding in polymorphism