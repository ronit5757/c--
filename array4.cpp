#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int marks[]= {12,52, 63, 11, 17};
    cout<<"these are marks \n"<<endl;
    int i=0;
    do
    {
        cout<<"the marks of roll number "<<setw(2)<<i<<setw(4)<<"are"<<setw(6)<<marks[i]<<endl;
        i++;
    } while (i<5);
     
    return 0;
}