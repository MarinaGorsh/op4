#include <iostream>
#include <string>
#include <math.h>
#include <corecrt_math_defines.h>
#define _USE_MATH_DEFINES
using namespace std;
float funk1(int, int, int);
float funk2(int, int, int);
float funk3(float);
int main() {
	int x, y, z, a;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	cout << "Enter z: ";
	cin >> z;
	float equals = funk2(x, y, z);
	a = funk3(equals);
	a++;
	cout << a;
}
float funk1(int x, int y, int z) {
	return pow(sin(pow(pow(x, 2) + z, 2)), 3) - sqrt(x / y) - tan(132 * M_PI / 180);
}
float funk2(int x, int y, int z) {
	return pow(x, 2) / abs(z - 8) + cos(pow(x + y, 3)) + pow(pow(3 * x + y, 2) + exp(y - 7), 5);
}
float funk3( float formula) {
	return int(formula);
}




















/*
int main()
{
	int x, y, z;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	cout << "Enter z: ";
	cin >> z;
	int o = funk1(x, z) + funk2(x, y) + funk3(x, y);
	cout << o << endl;
	o++;
	cout << o << endl;
	
}

float funk1(int x, int z)        
{
	return x * x / abs(z - 8);
}

float funk2(int x, int y)
{
	return cos(pow(x + y, 2));
}

float funk3(int x, int y)
{
	
	return pow(pow(3 * x + y, 2) + exp(y - 7), 5);
}

*/


//b = (x * x / abs(z - 8) + cos(pow(x + y, 2)) + pow(pow(3 * x + y, 2) + exp(y - 7), 5));