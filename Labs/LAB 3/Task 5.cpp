/* Name: Urooj Baloch
   ID: 23k-0071
*/

#include<iostream>
#include<string>
using namespace std;

class Stationary {
    string items[100];  
    int price[100];     
    int itemCount;      

public:
    Stationary() {
        itemCount = 0;
    }

    void add(string product, int worth) {
        if(itemCount < 100) {  
            items[itemCount] = product;
            price[itemCount] = worth;
            itemCount++;
        } else {
            cout << "Item list is full!" << endl;
        }
    }

    void modify(string product, int worth) {
        for(int i = 0; i < itemCount; i++) {
            if(items[i] == product) {
                price[i] = worth;
                return;
            }
        }
        cout << "Item not found!" << endl;
    }

    void display() {
        cout << "ITEMS\tPRICES" << endl;
        for(int i = 0; i < itemCount; i++) {
            cout << items[i] << "\t" << price[i] << endl;
        }
    }

    void retrieve() {
        cout << "Following is the list of all the items:" << endl;
        for(int i = 0; i < itemCount; i++) {
            cout << items[i] << endl;
        }
    }

    double receipt() {
        int qty = 0;
        double bill = 0;
        cout << "Enter the number of items: ";
        cin >> qty;
        string product;
        int prodQty = 1;

        for(int i = 0; i < qty; i++) {
            cout << "\nEnter the name of product: ";
            cin >> product;
            cout << "\nEnter the quantity of this product: ";
            cin >> prodQty;

            for(int j = 0; j < itemCount; j++) {
                if(items[j] == product) {
                    bill += price[j] * prodQty;
                    break;
                }
            }
        }
        return bill;
    }
};

int main() {
    Stationary s1;
    int choice;

    cout << "\n--------------------WELCOME TO THE SHOP--------------------\n";

    string name, oldItem;
    int price, newPrice;

    while (true) {
        cout << "1. Add items\n2. Modify items\n3. Retrieve items\n4. Display all the items\n5. Generate bill\n6. Exit\n";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nEnter the name of item: ";
                cin >> name;
                cout << "\nEnter the price of item: ";
                cin >> price;
                s1.add(name, price);
                break;

            case 2:
                cout << "\nEnter the item to modify: ";
                cin >> oldItem;
                cout << "\nEnter the new price: ";
                cin >> newPrice;
                s1.modify(oldItem, newPrice);
                break;

            case 3:
                s1.retrieve();
                break;

            case 4:
                s1.display();
                break;

            case 5:
                cout << "\nYour bill is: " << s1.receipt() << " Rs/-" << endl;
                break;

            case 6:
                return 0;

            default:
                cout << "Invalid input" << endl;
        }
    }

    return 0;
}
