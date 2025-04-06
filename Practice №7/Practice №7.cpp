#include <windows.h>
#include <iostream>
#include <string>
#include <math.h>

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    double x, y,
        const a = 2.7,
        const b = 3.5,
        const c = 0.2,
        t1, t2;

    std::cout << "Введіть x: ";
    std::cin >> x;

    std::cout << "Введіть y: ";
    std::cin >> y;

    t1 = (1 / pow(b, 3)) * (pow(a, 2) * log10(y / x) + ((2 * a * x) / y) + (pow(y, 2) / (2 * pow(x, 2))));
    t2 = (1 / (2 * sqrt(2) * a)) + ((3 * pow(sin(a * x), 2) - 1) / (pow(sin(a * x), 2) - 1));

    std::cout << "t1: " << t1 << "\n";
    std::cout << "t2: " << t2 << "\n";

    return 0;
}
