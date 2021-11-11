#include <iostream>
#include "windows.h"
using namespace std;
int main()
{
	float x, c, b, a;
    cin >> x >> c >> b >> a;
    double F;
    if ((c < 0) && (b != 0)) {
        F = a * x * x + b * b * x;
        cout << F;
    }
    else if ((x > 0) && (b == 0)) {
        F = x + a / x + c;
        cout << F;
    }
    else if (c != 0) {
        F = x / c;
        cout << F;
    }
	/*SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int x;
	cout << "Введіть номер дня тижня: ";
	cin >> x;

	switch (x)
	{
	case 1: cout << "3 пари"; break;
	case 2: cout << "3 пари"; break;
	case 3: cout << "4 пари"; break;
	case 4: cout << "4 пари"; break;
	case 5: cout << "2 пари"; break;
	case 6: cout << "немає пар"; break;
	case 7: cout << "немає пар"; break;
	default: cout << "Не існує"; break;
	}*/

}

/*8.	Написати алгоритм, який за номером
дня тижня - цілого числа від 1 до 7 видавати
в якості результату кількість уроків у класі у відповідний
день. */







    

