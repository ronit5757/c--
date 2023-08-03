// C = 5/9 * (F - 32)
// F = 9/5 * c + 32
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float c, f;
    cout<<"ENTER TEMPERATURE IN CELSIUS \n";
    cin>>c;
    f= (c * 9/5) + 32;
    cout<<"TEMPERATURE IN FAHRENHEIT IS \n"<<f<<endl; 
    
    return 0;   
}  