#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    //an array is a collection of items of similar type stored in contiguous memory loactions
    int marks[4]= {12, 34, 56, 78};
    int mathsmarks[3]= {56, 48, 89};
    cout<<"these are maths marks\n"<<endl;
    cout<<mathsmarks[0]<<endl;
    cout<<mathsmarks[1]<<endl;
    cout<<mathsmarks[2]<<endl;
    cout<<"these are marks \n"<<endl;
    marks[2]= 99; // we can change value stored in array
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    return 0;
}