#include<iostream>
#include<iomanip>
using namespace std;

class number
{
    int num;

    public:
    number()
    {
        num=0;
    } //there must be default constructor before making other constructor 
    number(int x)
    {
        num = x;
    }
    number(number &obj) //copy constructor inside constructor 
    {
        cout<<"\n copy constructor is called \n";
        num = obj.num;
    } //if we dont make this copy constructor by ousrself, we are provided with default copy constructor by compiler side. 
    void display()
    { 
        cout<<"the number entered is = "<<num<<" !!"<<endl;
    }
};
int main()
{
  number n1,n2,n3(30);
  n1 = number(3);
  n1.display();  

  n2.display();

  n3.display(); 

  number z1(n1);
  z1.display();

  return 0;

}