#include <iostream>
#include <cmath>
#include "geometry.h"
const double PI = 3.14;
using namespace std;

void Circle() {
    
	double R, corn;
	double dCircle, sCircle, sSecCircle;

	if (R <= 0){
	cout << "Ошибка. Радиус должен быть > 0" << endl;
	return;
}
	cout << "=== Окружность ===" << endl;
	cout << "Введите радиус:";
	cin >> R;

	dCircle = 2 * PI * R;
	sCircle = PI * R*R;
	
	cout << "Введите угол:";
	cin >> corn;
	sSecCircle = (PI * R*R * corn)/360;

	cout <<"Длина окружности:" << dCircle << endl;
	cout << "Площадь круга:" << sCircle << endl;
	cout << "Площадь кругового сектора" << sSecCircle << endl;

}
