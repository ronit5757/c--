#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N;
    cout << "enter the number" << endl;
    cin >> N;
    cout << endl;
    switch (N)
    {
    case 20:
        cout << "number is 20" << endl;
        break;
    case 30: 
        cout << "number is 30" << endl;
        break;
    default:
        cout << "number is unidentified" << endl;
        // without break statement every line under suitable case will be printed
    }
    return 0;
}