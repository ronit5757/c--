// every value in array stores 4 bytes each
// we dont have direct function to find length of array in c++

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40, 50};                                                                   //{arr[0] , arr[1] , arr[2] , arr[3] , arr[4]  ]}
    int length = sizeof(arr) / sizeof(arr[0]);                                                          // (4 + 4 + 4 + 4 + 4)/4
    for (int i = length - 1 /*because we have counting of position started from 0 not 1*/; i >= 0; i--) // example --> for i = 5 we we get arr[5] // here i will work for last array element to first array element whiuch is arr[0];
    {
        cout << arr[i] << setw(3);
    }
    return 0;
}   