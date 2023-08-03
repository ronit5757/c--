//there are three classes A B and C
//for multiple inheritence, the base class created first will have constror called first
//for multilevel inheritance, constructors are executed in order of inheritance
//C(1,2,3,4,5,6) : B(1,2), C(5,6) {}
//virtual class constructor will be given top most priority and only after their invoke only, the non virtual class constructors will be invoked
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    
    return 0; 
} 