#include <iostream>
#include <windows.h>
#include <cmath>

int main()
{
    SetConsoleOutputCP(1251);

    const short fullSize = 20, first10 = 10;
    double sumOf10 = 0, sumAll = 0;

    for (int n = 1; n <= fullSize; ++n) {
        double firstMultyplier = pow(-1, n),
            numerator = 1,
            denominator = pow(n, 2) + pow(2, n),
            a_n = firstMultyplier * (numerator / denominator);

        if (n < first10)
            sumOf10 += a_n;

        sumAll += a_n;
    }

    std::cout << "Сума 10 членів ряду: " << sumOf10 << "\n";
    std::cout << "Сума всіх членів ряду: " << sumAll << "\n";

    return 0;
}
