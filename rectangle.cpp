#include <iostream>
#include <cmath>

using namespace std;

int main(){

	double a,b;
	double sRect, pRect, dRect; 

	cout << "=== Прямоугольник ===\n";
	cout << "Введите длину и ширину прямоугольника:";
	cin >> a >>  b;

	if (a <= 0 or b <= 0){
		cout << "Ошибка. Стороны должны быть положительны.";
		return 1;
	}

	sRect = a * b;
	pRect = 2 * (a + b);
	dRect = sqrt(a * a + b * b);

	cout << "Площадь прямоугольника:" << sRect << endl;
	cout << "Периметр прямоугольника:" << pRect << endl;
	cout << "Диагональ прямоугольника:" << dRect << endl;

	return 0;
}
