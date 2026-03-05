#include <iostream>
#include <cmath>
#include "geometry.h"

using namespace std;

void Triangle() {
    setlocale(LC_ALL, "rus");
    int a, b, c, halfP, P, sGer;

    cout << "Введите стороны треугольника a, b, c: \n";
    cin >> a >> b >> c;

    if (a + b <= c || a + c <= b || b + c <= a) cout << "\nТреугольника не существует.\n";
    else {
        P = a + b + c;
        halfP = P / 2;
        sGer = sqrt(halfP * (halfP - a) * (halfP - b) * (halfP - c));
        cout << "\nПериметр: " << P << "\n";
        cout << "Прощадь по формуле Герона: " << sGer << "\n";

        if (a == b || b == c || a == c) cout << "Треугольник равнобедренный\n";
        else cout << "Треугольник не равнобедренный.\n";
    }
}