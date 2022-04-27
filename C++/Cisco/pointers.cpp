#include <iostream>

using namespace std;

int main()
{
    int vector[] = {3, -5, 7, 10, -4, 14, 5, 2, -13};
    int n = sizeof(vector) / sizeof(vector[0]); // size of the array

    /*
        Find the smallest number in the array without the use of indexing.
        Using brackets in your code is strictly prohibited.
    */

    int *pVector = vector;
    int min = *(pVector); // get first value as min

    for (int i = 1; i < n; i++)
    {
        if (*(pVector + i) < min)
            min = *(pVector + i);
    }

    cout << "The minimum value is: " << min << endl;

    return 0;
}