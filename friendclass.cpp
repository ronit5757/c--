#include <iostream>
#include <iomanip>
using namespace std;

class complex; // forward declaration

class calculator
{ 
public:
    int add(int a, int b)
    {
        return a + b;
    }
    //  int minus(int a, int b)
    //{
    //    return (a - b);
    //}
    int sumofcomplexreal(complex, complex); // opened up after complex class to define datattype of o1 and o2
    int sumofcomplex(complex, complex);
    void totalsum();
    // int minusofcomplexreal(complex, complex);
    // int minusofcomplex(complex, complex);
};

class complex
{
private:
    int a, b;
    friend int calculator ::sumofcomplexreal(complex o1, complex o2); // freind classes are created which can access private data of complex
    friend int calculator ::sumofcomplex(complex o1, complex o2);
    friend void calculator :: totalsum();
    // friend int calculator ::minusofcomplexreal(complex o1, complex o2);
    // friend int calculator ::minusofcomplex(complex o1, complex o2);

public:
    void num1(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printnum1()
    {
        cout << "the number is " << a << " + " << b << "i " << endl;
    }
    void num2(int x1, int x2)
    {
        a = x1;
        b = x2;
    }
    void printnum2()
    {
        cout << "the number is " << a << " - " << b << "i " << endl;
    }
};

int calculator ::sumofcomplexreal(complex o1, complex o2)
{
    {
        int c= (o1.a + o2.a);
        return c;
    }
}
int calculator ::sumofcomplex(complex o1, complex o2)
{
        int d = ((o1.b + o2.b));
        return d;
}
void calculator :: totalsum()
{
    
}
//int calculator ::minusofcomplexreal(complex o1, complex o2)
//{
//    return (o1.a - o2.a);
//}
//int calculator ::minusofcomplex(complex o1, complex o2)
//{
//    return (o1.b - o2.b);
//}

int main()
{
    complex c1, c2;
    //c1 stores one complex number 
    //c2 stores 2 complex number
    c1.num1(4, 5);
    c1.printnum1();
 
    c2.num2(1, 2);
    c2.printnum2();

     calculator calc1;
     int result = calc1.sumofcomplexreal(c1, c2); //new variable result is createwd
      cout<<"the sum of real part is "<<result<<endl;
     int result1 = calc1.sumofcomplex(c1, c2); // new variable result2 is created 
     cout<<"the sum of complex part is "<<result1<<"i"<<endl;  
    cout<<"final number is "<<result<<" + "<<result1<<"i"<<endl; 
    // int minus = calc2.minusofcomplexreal(c1, c2);
    // int minus = calc2.minusofcomplex(c1, c2);  
  
    return 0;
} 