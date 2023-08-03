// FIND NUMBER OF NOTES USED FROM ACCENDING VALUE TO DECENDING IN OBTAINING GIVEN AMMOUNT

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int A;
    cout << "ENGTER AMMOUNT!! " << endl;
    cin >> A;
    int rs100, rs50, rs20, rs1;
    switch (1)
    {
    case 1 :
        rs100 = A / 100;
        A = A - rs100 * 100;
        cout << "rs 100 notes are " << rs100 << endl;

    case 2:
        rs50 = A / 50; 
        A = A - rs50 * 50;
        cout << "rs 50 notes are " << rs50 << endl;

    case 3: 
        rs20 = A / 20;
        A = A - rs20 * 20;
        cout << "rs 20 notes are " << rs20 << endl;

    case 4 : 
        rs1 = A / 1;
        cout << "rs 1 coins are " << rs1 << endl;
    }
    return 0;
}