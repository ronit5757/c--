#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i, j;
    int k;
    k = 5;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j <= 6 - i)
            {
                cout << j << " ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << "\n";
    }

    return 0;
}