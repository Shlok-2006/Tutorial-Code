#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string productID;
    string productName;
    float price;
    int quantity;

public:
    Product(string id, string name, float p, int q) {
        productID = id;
        productName = name;
        price = p;
        quantity = q;
    }

    float calculateTotalPrice() {
        return price * quantity;
    }

    void productDetails() {
        cout << "Product ID: " << productID << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: $" << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Price: $" << calculateTotalPrice() << endl;
    }
};

void displayCart(Product cart[], int size) {
    cout << "Shopping Cart Details:\n";
    for (int i = 0; i < size; i++) {
        cart[i].productDetails();
        cout << "-------------------------" << endl;
    }
}

int main() {
    Product cart[] = {
        Product("P101", "Laptop", 1200.50, 1),
        Product("P102", "Smartphone", 800.99, 2),
        Product("P103", "Headphones", 150.75, 3)
    };
    
    int cartSize = sizeof(cart) / sizeof(cart[0]);
    displayCart(cart, cartSize);
    
    return 0;
}