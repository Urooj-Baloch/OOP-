/*Name: Urooj Baloch
ID:23k-0071
*/
#include <iostream>
#include <string>
using namespace std;
const int MAX_PRODUCTS = 100;
struct Product {
    int productId;
    string productName;
    double price;
    int quantity;
};

int main() {
    Product products[MAX_PRODUCTS];
    int numProducts = 0;
    int choice, id, quantity;
    double price;
    string name;
    // Add a product
    if (numProducts < MAX_PRODUCTS) {
        id = 1;
        name = "Laptop";
        price = 999.99;
        quantity = 10;
        products[numProducts].productId = id;
        products[numProducts].productName = name;
        products[numProducts].price = price;
        products[numProducts].quantity = quantity;
        numProducts++;
        cout << "Product added successfully.\n";
    } else {
        cout << "Maximum number of products reached. Cannot add more products.\n";
    }
    // Display product information
    cout << "\nDisplaying product information:\n";
    id = 1;
    bool found = false;
    for (int i = 0; i < numProducts; ++i) {
        if (products[i].productId == id) {
            cout << "Product ID: " << products[i].productId << endl;
            cout << "Product Name: " << products[i].productName << endl;
            cout << "Price: $" << products[i].price << endl;
            cout << "Quantity in Stock: " << products[i].quantity << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Product not found.\n";
    }
    // Update product information
    id = 1;
    price = 1099.99;
    quantity = 5;
    found = false;
    for (int i = 0; i < numProducts; ++i) {
        if (products[i].productId == id) {
            products[i].price = price;
            products[i].quantity = quantity;
            cout << "Product information updated successfully.\n";
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Product not found. Update failed.\n";
    }
    // Display updated product information
    cout << "\nDisplaying updated product information:\n";
    id = 1;
    found = false;
    for (int i = 0; i < numProducts; ++i) {
        if (products[i].productId == id) {
            cout << "Product ID: " << products[i].productId << endl;
            cout << "Product Name: " << products[i].productName << endl;
            cout << "Price: $" << products[i].price << endl;
            cout << "Quantity in Stock: " << products[i].quantity << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Product not found.\n";
    }
    return 0;
}
