#include<iostream>
#include<iomanip>
using namespace std;
int sum(int a, int b){             //             
    int c= a + b;                   //
    return c;                       //function prototype that is only first line [int sum(int a, int b)]can be printed before main if we want to write this function after return0;
} //a sum function is created       //
int subtract(int a, int b ){
    int c = a-b;
    return c;
}// a subtract function is created

    void g(); //prototype created and void dont needs return
int main()
{
    int num1;int num2;
    cout<<"enter num1 \n"<<endl;
    cin>>num1;
    cout<<":enter num2 \n"<<endl;
    cin>>num2;
    cout<<"the sum is = \n"<<sum(num1,num2)<<endl;
    cout<<"the difference is = \n"<<subtract(num1,num2)<<endl;
    cout<<endl;
    g();
    return 0;
} //here a and b are formal parameters and num1,num2 that are assigned in function are actual parameters

        void g(){
            cout<<"!!!!Ur program is executed!!!!";
        }