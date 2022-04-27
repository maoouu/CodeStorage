#include <iostream>

using namespace std;

int main()
{
    int rows = 5;
    int columns = 5;
    int **ptrArray;

    // allocate & initialize the array
    ptrArray = new int *[rows];

    for (int ptrRow = 0; ptrRow < rows; ptrRow++)
    {
        ptrArray[ptrRow] = new int[ptrRow + 1];

        for (int ptrColumn = 0; ptrColumn <= ptrRow; ptrColumn++)
            ptrArray[ptrRow][ptrColumn] = (ptrRow + 1) * 10 + ptrColumn + 1;
    }

    // print the array
    for (int ptrRow = 0; ptrRow < rows; ptrRow++)
    {
        for (int ptrColumn = 0; ptrColumn <= ptrRow; ptrColumn++)
            cout << ptrArray[ptrRow][ptrColumn] << " ";

        cout << endl;
    }

    // free the array
    for (int ptrRow = 0; ptrRow < rows; ptrRow++)
        delete[] ptrArray[ptrRow];

    delete[] ptrArray;
    return 0;
}