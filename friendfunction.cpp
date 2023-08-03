#include<iostream>
#include<iomanip>
using namespace std;

class complex
{
    private :
            int a;
            int b;
    public :

            void setdata(int v1, int v2)
            {
                a=v1;
                b=v2;
            };
        
            friend complex subcomplex(complex o1 , complex o2); //the foreign function declaration in class and can use private data
            void printdata()
            {
                cout<<"the number is "<<a<<" + "<<b<<"i "<<endl;
            }
};
complex subcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setdata((o1.a + o2.a) , (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1,c2,c3;
    c1.setdata(3,6);
    c1.printdata();

    //c2.subcomplex(); is invalid
    c2.setdata(2, 4); 
    c2.printdata();

    c3= subcomplex(c1,c2); //this is just a foreignm function declaration and it is not a member function of class complex
    c3.printdata();   
    return 0;
}  