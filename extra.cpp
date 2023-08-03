#include <iostream>
using namespace std;

int main()
{
    float d=28.7f;
    long double e=28.7l;
    cout<<"the value of 28.7 is..."<<sizeof(28.7)<<endl; /*defaultly treated as double*/
      cout<<"the value of 28.7f is..."<<sizeof(28.7f)<<endl;
        cout<<"the value of 28.7l is..."<<sizeof(28.7l)<<endl;
    return 0;

}