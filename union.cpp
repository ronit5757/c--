#include<iostream>
#include<iomanip>
using namespace std;

union money //memory optimization by using memory allocation and usage to only one datattype at a time
{
    int rice; // suppose allocated 4
    float pounds; // suppose aloocated 4
    char car;  //suppose allocated 1 bit
};
int main()
{
    union money m1; // m1 field is added
    m1.rice= 6;
    cout<<m1.rice<<endl;
     m1.car= 'verna'; 
    cout<<m1.car; // after adding this, we will get garbage value for rice
    return 0;
}