//base class pointer is created which officially points the object1 of base class (see polymorphism file for this referce)
//we made base class pointer point the object 2 address which is object of derived class 
//here on displaying display() fuction using base class pointer,->
// we will get it displayed of base class only even if we pointed the base class pointrer on obj2 of derived class 
//AFTER MAKING THE DISPLAY() FUNCTION OF BASE CLASS VIRTUAL,
//we can now access the display function of derived class using pointer->display() 
//virtual function banne ke bad vo function kehra hai ki :- 
//agar meri class ka pointer derived class ke object ko point kre to derived class ke function ko e invoke krna
#include<iostream>
#include<iomanip>
using namespace std;  
class base 
{
    public:
    int var_base = 1;
    virtual void display()
    {
        cout<<"THE VALUE OF VAR_BASE IS "<<var_base<<endl;
    }
};
class derived : public base 
{
    public:
    int var_derived=2 ;
    void display()
    {
        cout<<"THE VALUE OF VAR_BASE IS = "<<var_base<<endl;
        cout<<"THE VALUE OF VAR_DERIVED IS = "<<var_derived<<endl;
    }
};
int main()
{
  base *base_pointer;
  base obj1;
  derived obj2;
  base_pointer = & obj2;
 //base class pointer is pointing to derived class object 
  base_pointer -> display(); //in normal case it will be displayed of base class of which the pointer is .. 
  //lekin yaha virtual bna dia gya hai base class ke function ko,
  // toh derived class ke object ko agar pointer point krega toh vo derived class kla e display invoke krega 
  // or ye sb run time me hoga due to late binding ...  
    return 0;
}   
