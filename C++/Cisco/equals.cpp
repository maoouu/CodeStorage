#include <iostream>

using namespace std;

inline void print(string str, int num)
{
    cout << str << num << endl;
}
inline void print(string str, float num)
{
    cout << str << num << endl;
}

int main()
{
    float f = 123.456;
    float g = 1e100;
    int i = f;
    int j = g;

    print("Float 1: ", f);
    print("Float 2: ", g);
    print("Integer 1: ", i);
    print("Integer 2: ", j);

    return 0;
}