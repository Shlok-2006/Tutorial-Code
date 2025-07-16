#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "Enter first fraction (format: a/b): ";
    char slash1;
    cin >> a >> slash1 >> b;
    cout << "Enter second fraction (format: c/d): ";
    char slash2;
    cin >> c >> slash2 >> d;
    int numerator = a * c;
    int denominator = b * d;
    cout << "Product = " << numerator << "/" << denominator << endl;
    return 0;
}
