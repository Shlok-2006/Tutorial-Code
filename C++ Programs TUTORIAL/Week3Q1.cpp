#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountNumber;
    std::string accountHolderName;
    double balance;

public:
    BankAccount(std::string accNumber, std::string accHolder, double bal = 0.0) 
        : accountNumber(accNumber), accountHolderName(accHolder), balance(bal) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount << ". New balance: $" << balance << std::endl;
        } else {
            std::cout << "Deposit amount must be positive." << std::endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0) {
            if (balance >= amount) {
                balance -= amount;
                std::cout << "Withdrawn $" << amount << ". New balance: $" << balance << std::endl;
            } else {
                std::cout << "Insufficient balance. Withdrawal denied." << std::endl;
            }
        } else {
            std::cout << "Withdrawal amount must be positive." << std::endl;
        }
    }

    void display() const {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Holder: " << accountHolderName << std::endl;
        std::cout << "Balance: $" << balance << std::endl;
    }
};

int main() {
    BankAccount account("123456789", "John Doe", 500.0);
    account.display();
    std::cout << std::endl;
    account.deposit(200);
    account.withdraw(100);
    account.withdraw(700);
    account.display();
    return 0;
}
