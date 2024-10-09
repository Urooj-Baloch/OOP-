#include <iostream>
#include <string>
using namespace std;
class BankAccount {
private:
    string accountNumber;      
    string accountHolderName;  
    double balance;             
public:
    BankAccount(string accNumber, string holderName, double initialBalance) 
        : accountNumber(accNumber), accountHolderName(holderName), balance(initialBalance) {}
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << " Rupees\n";
        } else {
            cout << "Invalid deposit amount: " << amount << endl;
        }
    }
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds for withdrawal of: " << amount << " Rupees\n";
        } else if (amount > 0) {
            balance -= amount;
            cout << "Withdrawn: " << amount << " Rupees\n";
        } else {
            cout << "Invalid withdrawal amount: " << amount << endl;
        }
    }
    void display() const {
        cout << "\nAccount Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: " << balance << " Rupees\n";
    }
};
int main() {
    BankAccount accounts[3] = {
        BankAccount("ACC001", "Urooj Baloch", 1200.0),
        BankAccount("ACC002", "Mahnoor Hussain", 3000.0),
        BankAccount("ACC003", "Rabia", 1800.0)
    };
    for (int i = 0; i < 3; ++i) {
        cout << "Account " << (i + 1) << " details:";
        accounts[i].display(); 
        accounts[i].deposit(500.0); 
        accounts[i].display(); 
        accounts[i].withdraw(200.0); 
        accounts[i].display(); 
        
        cout << "----------------------------------\n"; 
    }

    return 0;
}
