#include <iostream>
#include <clocale>
int main() {
    setlocale(LC_ALL, "Russian");
    float a, b, h, c, d;
    std::cout << "Введите основания: ";
    std::cin >> a >> b;
    std::cout << "Введите боковые стороны: ";
    std::cin >> c >> d;
    std::cout << "Введите высоту: ";
    std::cin >> h;

    float ploshad = (a + b) / 2.0 * h; 
    float srLinia = (a + b) / 2.0;
    float perimetr = a + b + c + d; 
    std::cout << "Площадь: " << ploshad << std::endl;
    std::cout << "Средняя линия: " << srLinia << std::endl;
    std::cout << "Периметр: " << perimetr << std::endl;

    return 0;
}
