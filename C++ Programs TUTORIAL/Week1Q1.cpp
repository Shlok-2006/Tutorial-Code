#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int num1, num2, product;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    product = num1 * num2;
    int count_of_digits = (product == 0) ? 1 : (int)log10(abs(product)) + 1;
    cout << "Product - " << product << endl;
    cout << "Count of digits - " << count_of_digits << endl;
    return 0;
}
