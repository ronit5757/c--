//structure does not promote data hiding 
//structure dont support functions easily
//the function in a class can be implemented within a class or outside the classby removing ;
#include<iostream>
#include<iomanip>
using namespace std;

class employee
{
    private :
        int a,b,c;
    public :
        int d,e;
        void setdata(int a1, int b1, int c1);
        void setdata(int a2, int b2, int c2); //sets the data declaration and tells compiler that this data will be provided in future
        void getdata() //prints the data
        {
             cout<<"the value of a is = "<<a<<endl;  //all these declarations can be done outside also
             cout<<"the value of b is = "<<b<<endl; 
             cout<<"the value of c is = "<<c<<endl; 
             cout<<"the value of d is = "<<d<<endl; 
             cout<<"the value of e is = "<<e<<endl; 
        } 
};

void employee :: setdata(int a1,int b1,int c1) // setdata function is defined outside to prevent congestion
{
    a=a1;
    b=b1;
    c=c1;
}
int main()
{
  employee ronit; //object ronit for class employee is created
    ronit.d = 15;
    ronit.e = 8; // public class values can be determined and changed in main function
    //we cant change a , b and c in main function
    ronit.setdata(1,2,4);   
    ronit.getdata();
    
    return 0;   
}