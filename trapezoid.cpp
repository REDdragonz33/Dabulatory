#include <iostream>
#include <cmath>
#include "geometry.h"

using namespace std;

void Trapezoid() {
    
	double a, b, c, d, h;
	double P, S, m;

	cout << "=== Трапеция ===" << endl;
	cout << "Введите основания"<< endl;
	cin >> a >> b;
	
	cout << "Введите боковые стороны:" << endl;
	cin >> c >> d;

	cout << "Введите высоту:";
	cin >> h;

	if (a <= 0 or b <= 0 or c <= 0 or d <= 0 or h <= 0){
	cout << "Ошибка. Стороны должны быть положительны." << endl;
	return;
	}

	P = a + b + c + d;
	S = (a+b)/2 * h;
	m = (a + b)/2;
	
	cout << "Периметр:" << P << endl;
	cout << "Площадь:" << S << endl;
	cout << "Длина средней линии:" << m << endl;
	return;
}

