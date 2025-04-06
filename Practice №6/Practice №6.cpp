#include <windows.h>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    string type1, route1, type2, route2, type3, route3;
    float distance1, distance2, distance3;
    unsigned short time1, time2, time3;

    cout << "1. Введіть: вид транспорту, № маршруту, протяжність (км), час у дорозі (хв) > ";
    cin >> type1 >> route1 >> distance1 >> time1;

    cout << "2. Введіть: вид транспорту, № маршруту, протяжність (км), час у дорозі (хв) > ";
    cin >> type2 >> route2 >> distance2 >> time2;

    cout << "3. Введіть: вид транспорту, № маршруту, протяжність (км), час у дорозі (хв) > ";
    cin >> type3 >> route3 >> distance3 >> time3;

    cout << "--------------------------------------------------------------------------\n";
    cout << "|               Відомість громадського транспорту                        |\n";
    cout << "--------------------------------------------------------------------------\n";
    cout << "| Вид транспорту | № маршруту | Протяжність м.(км) | Час в дорозі (хв)  |\n";
    cout << "--------------------------------------------------------------------------\n";

    cout << "| " << setw(15) << left << type1
        << "| " << setw(11) << left << route1
        << "| " << setw(18) << right << fixed << setprecision(2) << distance1
        << " | " << setw(17) << right << time1 << " |\n";

    cout << "| " << setw(15) << left << type2
        << "| " << setw(11) << left << route2
        << "| " << setw(18) << right << fixed << setprecision(2) << distance2
        << " | " << setw(17) << right << time2 << " |\n";

    cout << "| " << setw(15) << left << type3
        << "| " << setw(11) << left << route3
        << "| " << setw(18) << right << fixed << setprecision(2) << distance3
        << " | " << setw(17) << right << time3 << " |\n";

    cout << "--------------------------------------------------------------------------\n";
    cout << "Примітка: Тр – трамвай; Т-с – тролейбус; А – автобус.\n";

    return 0;
}
