#include <iostream>
#include<typeinfo>
using namespace std;

int main() {
    float x = 2.5;
    int y = 3;
    auto result = x / y; // Implicit type conversion: int promoted to float

    cout << "Value of result: " << result << endl;
    cout << "Data type of result: " << typeid(result).name() << endl;

    return 0;
}
