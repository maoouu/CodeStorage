#include <iostream>

using namespace std;

int main()
{
	float pi = 3.14159265359;
	float x, y;

	cout << "Enter value for x: ";
	cin >> x;

	float x_squared = x * x;
	float pi_squared = pi * pi;
	float p = (2 * x_squared + 1) / 2;
	float q = (2 * x_squared - 1) / 2;
	float q_squared = q * q;

	y = (x_squared / (pi_squared * p)) * ((x_squared / (pi_squared * q_squared)) + 1);

	cout << "y = " << y;
	return 0;
}