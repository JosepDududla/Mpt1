#include <iostream>

#include <cmath>

using namespace std;

int main()

{

	double c, d, a;

	setlocale(LC_ALL, "");

	cout << ("Введите 3 числа:");

	cin >> a >> d >> c;

	cout << (-2 * c - ln(d) + 53) / (a / 4 - 1);

}