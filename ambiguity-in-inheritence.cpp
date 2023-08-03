#include <iostream>
#include <iomanip>
using namespace std;

class base1
{
public:
    void greet()
    {
        cout << "HOW ARE YOU \n";
    }
};

class base2
{
public:
    void greet()
    {
        cout << "KAISE HO \n";
    }
};
class derived : public base1, public base2
{ // function greet of both base 1 and base 2 are added publically in this class
    int a;

public:
    void greet()
    {
        base1 ::greet(); // the greet function method of derived class will now call greet function of base 1 class
    }                    // hence the ambiguity is removed
};
int main()
{
    // CALLING GREET FUNCTIONS OF ALL THREE CLASSES
    // THE CLASS DERIVED GOY GREET PUBLICALLY OF BOTH BASE1 AND BASE2
    // AMBIGUITY ARISES HERE THAT WHICH CLASS'S GREET FUNCTION WILL DERIVED CLASS CALL
    // WE DECLARED BASE1:: GREET(); SO WE WILL GET BASE1 GREET FUNCTION CALLED AND AMBIGUITY IS REMOVED
    base1 obj1;
    base2 obj2;
    derived obj3;
    obj1.greet();
    obj2.greet();
    obj3.greet();
    return 0;
}