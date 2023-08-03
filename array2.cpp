#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int marks[]= {23, 53, 28, 94, 67, 37, 49, 73};
    for(int i=1; i<8; i++)
    {
        cout<<"the marks of roll number "<<setw(1)<<i<<" are = "<<setw(3)<<marks[i]<<endl;
    }
    return 0;
}