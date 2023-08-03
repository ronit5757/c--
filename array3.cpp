#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int marks[]= {12, 23, 34, 45, 56, 78, 89};
    int i = 0;
    cout<<"following are the marks of students \n"<<endl;
    while( i<= 6) 
    {
        cout<<marks[i]<<setw(5);
        i++;
    }
    return 0;
}