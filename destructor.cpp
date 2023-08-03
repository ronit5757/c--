// destructors are used to free up the memory taken up by constructors
//  a destructor camn neither take any argument nor it return any value

#include <iostream>
#include <iomanip>
using namespace std;
int count = 0; // golbal variable is made
class num
{
public:
    num() //this is constructor
    {
        count++;
        cout << "THIS IS THE TIME WHEN CONSTRUCTOR IS CALLED FOR OBJECT NUMBER " << count << endl;
    }

    ~num()
    {
        cout<<"THIS IS TIME WHEN MY DESTRUCTOR IS CALLED FOR OBJECT NUMBER "<<count<<endl;
        count--;
    }
};
int main()
{
    cout<<"WE Are inside our main function "<<endl;
    cout<<"CREATING FIRST OBJECT \n";
    num n1;
    {
        cout<<"ENTERING THIS BLOCK \n";
        cout<<"CREATING TWO MORE OBJECTS \n";
        num n2,n3;
        cout<<"EXITING THIS BLOCK \n";
    }
    cout<<"BACK TO THE MAIN \n";
    return 0; 
} 