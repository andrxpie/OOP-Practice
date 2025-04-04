#include <iostream>
#include <windows.h>

class Converter {
private:
    double _usdRate;
    double _eurRate;

public:
    Converter(double usdRate, double eurRate)
        : _usdRate(usdRate), _eurRate(eurRate) {}

    double UAHToUSD(double uahAmount) {
        return uahAmount / _usdRate;
    }

    double UAHToEUR(double uahAmount) {
        return uahAmount / _eurRate;
    }

    double USDToUAH(double usdAmount) {
        return usdAmount * _usdRate;
    }

    double EURToUAH(double eurAmount) {
        return eurAmount * _eurRate;
    }
};

int main()
{
    SetConsoleOutputCP(1251);

    // Курс валют на момент 04.04.2025 22:01
    Converter converter(40.90, 45.);

    std::cout << "Оберіть варіант конвертації:\n\n";
    std::cout << "[1]- UAH в USD\n";
    std::cout << "[2]- UAH в EUR\n";
    std::cout << "[3]- USD в UAH\n";
    std::cout << "[4]- EUR в UAH\n\n";
    std::cout << "?: ";

    int choice;
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        // Очищаю консоль
        system("cls");
        std::cout << "Введіть суму в UAH: ";
        double uahAmount1;
        std::cin >> uahAmount1;
        std::cout << "Сума в USD: " << converter.UAHToUSD(uahAmount1) << "\n";
        break;
    case 2:
        system("cls");
        std::cout << "Введіть суму в UAH: ";
        double uahAmount2;
        std::cin >> uahAmount2;
        std::cout << "Сума в EUR: " << converter.UAHToEUR(uahAmount2) << "\n";
        break;
    case 3:
        system("cls");
        std::cout << "Введіть суму в USD: ";
        double usdAmount;
        std::cin >> usdAmount;
        std::cout << "Сума в UAH: " << converter.USDToUAH(usdAmount) << "\n";
        break;
    case 4:
        system("cls");
        std::cout << "Введіть суму в EUR: ";
        double eurAmount;
        std::cin >> eurAmount;
        std::cout << "Сума в UAH: " << converter.EURToUAH(eurAmount) << "\n";
        break;
    default:
        std::cout << "Обраного варіанту не існує. Спробуйте ще раз\n";
        break;
    }

    return 0;
}
