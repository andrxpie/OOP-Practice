#include <iostream>

int main()
{
    int testVar = 3, testRes;
    testRes = 3 / testVar;
    std::cout << "result: " << testRes << "\n";

    testRes = 3 / testVar;
    std::cout << "result: " << testRes << "\n";
}
