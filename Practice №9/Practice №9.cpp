#include <iostream>
#include <windows.h>

bool isOutsideShadedArea(double x, double y) {
    if ((x * x + y * y <= 1) && (x>=0)) return true;
    if ((x * x + y * y <=1) && (y>=0)) return true;
    return false;
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    double x, y;

    std::cout << "Введіть x: ";
    std::cin >> x;

    std::cout << "Введіть y: ";
    std::cin >> y;

    std::cout << "x: " << x << ", y: " << y << "\n";

    if (isOutsideShadedArea(x, y))
        std::cout << "Точка потрапляє в зафарбовану зону\n";
    else
        std::cout << "Точка НЕ потрапляє в зафарбовану зону\n";

    return 0;
}
