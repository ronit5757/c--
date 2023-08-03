#include<iostream>
#include<iomanip>
using namespace std;

    class complex
        {
            int a,b;
            public:
                 complex(int, int);  //parametrized constructor as it is taking values in main function......
                void printnum()
                {
                    cout<<"number is "<<a<<" + "<<b<<"i"<<endl;
                }

        };

complex :: complex(int x , int y)
{
    a= x;
    b= y;
}
 
int main()
{
    //implicit call
    complex c(5,6);
    c.printnum();

    //explicit call
    complex d = complex(3,5);
    d.printnum();
    return 0; 
}