#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "ENTER NUMBER TO CHECK IT IS PERFECT SQUARE OR NOT " << endl;
    cin >> n;
    int k = sqrt(n); // from math.h
    if (k * k == n)
    {
        cout << "the number is perfect square!!! \n";
    }
    else
    {
        cout << "NOT A PERFECT SQUARE \n";
    }
    return 0;
}