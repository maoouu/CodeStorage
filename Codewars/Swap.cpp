#include <iostream>
#include <ctime>
/**
 *  Task: Do a symmetrical swap on an array, then print its elements
 *  
 *  [Input] 
 *  6
 *  1 2 3 4 5 6
 * 
 *  [Output]
 *  6 5 4 3 2 1
 * 
 */
void swapMaster(int size, int num[]);

int main()
{
    srand(time(0));
    int randomSet = 100000; //(rand() % 1000) + 3;
    int array[randomSet];
    size_t size = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < size; i++)
        array[i] = (rand() % 25) + 1;

    swapMaster(size, array);
    return 0;
}

void swapMaster(int size, int num[])
{
    int arr[size];

    for (int i = 0; i < size; i++)
        arr[i] = num[i];

    for (auto element : arr)
        std::cout << element << " ";
    std::cout << "\n";

    for (int i = 1; i <= size; i++)
        std::cout << arr[size - i] << " ";
    std::cout << "\n\n";
}