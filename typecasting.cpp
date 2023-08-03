#include <iostream>
using namespace std;

int main()
{
    int a= 45;
    float b = 45.7;

    cout<<"the value of a + b is ..." <<a + int(b)<<endl;
    /*here b is converted to int from float*/

    return 0;
}