/*constants are the variables whose values cant be changed accidently ... const int a=5*/
//manipulators helps in displaying the end results beautifully example endl and setw
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 12, b = 30;
    cout<<"the sum of a and b is ="<<a+b<<endl;
    cout<<"the sum of a and b using setw is ="<<setw(6)<<a+b;

//setw() gives accurate space in end of a line before showing result
    return 0;
}