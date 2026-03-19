#include <iostream>
#include <clocale>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    double a, b, c, d, h;
    cout << "Введите основания: ";
    cin >> a >> b;
    cout << "Введите боковые стороны: ";
    cin >> c >> d;
    cout << "Введите высоту: ";
    cin >> h;
	
    if (a <= 0 || b <= 0 || c <= 0 || d <= 0 || h <= 0){
    cout << "Значения должны быть больше нуля" << endl;
    return 0;
    }
    double ploshad = (a + b) / 2.0 * h; 
    double srLinia = (a + b) / 2.0;
    double perimetr = a + b + c + d; 
    cout << "Площадь: " << ploshad << endl;
    cout << "Средняя линия: " << srLinia << endl;
    cout << "Периметр: " << perimetr << endl;

    return 0;
}
