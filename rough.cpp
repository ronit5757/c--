#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i, j;
    int k= 6;
    for (i = 1; i <= 5; i++)
    {
        k=j-1;
        for (j = 6; j <= 10; j++)
        {
            if (j >= 5 + i)
            {   
                cout << j << " ";
                j--;
            }
            else
            {
                cout << "* ";
            }
        } 
        cout << endl;
    }

    return 0;
}