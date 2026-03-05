#include <iostream>
#include "geometry.h"

using namespace std;

int main(){
	int choice;
	
	cout << "Выберите фигуру:" << endl;
	cout << "1. Прямоугольник" << endl;
	cout << "2. Треугольник" << endl;
	cout << "3. Трапеция" << endl;
	cout << "4. Окружность" << endl;
	cout << "0. Выход" << endl;
	
	switch(choice){
	case 1:
		Rectangle();
		break;
	case 2:
		Triangle();
		break;
	case 3:
		Trapezoid();
		break;
	case 4:
		Circle();
		break;
	case 0:
		cout << "Программа завершена"<< endl;
		break;
}

return 0;
}
