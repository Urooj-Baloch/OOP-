#include <iostream>
#include <string>

const int MAX_MENU_ITEMS = 10;  
const int MAX_ORDER_ITEMS = 10; 


class MenuItem {
public:
    MenuItem() {}  

    MenuItem(const std::string& name, double price) : name(name), price(price) {}

    std::string getName() const {
        return name;
    }

    double getPrice() const {
        return price;
    }

private:
    std::string name;
    double price;
};


class Menu {
public:
    
    Menu() : numItems(0) {}

    void addItem(const MenuItem& item) {
        if (numItems < MAX_MENU_ITEMS) {
            menuItems[numItems++] = item;
        }
    }

    void removeItem(const MenuItem& item) {
        
        for (int i = 0; i < numItems; ++i) {
            if (menuItems[i].getName() == item.getName()) {
                
                for (int j = i; j < numItems - 1; ++j) {
                    menuItems[j] = menuItems[j + 1];
                }
                numItems--;
                break;
            }
        }
    }

    void displayMenu() const {
        std::cout << "Menu:\n";
        for (int i = 0; i < numItems; ++i) {
            std::cout << menuItems[i].getName() << " - $" << menuItems[i].getPrice() << "\n";
        }
    }

private:
    MenuItem menuItems[MAX_MENU_ITEMS];
    int numItems;
};


class Payment {
public:
    Payment() {}  

    Payment(double amount) : amount(amount) {}

    double getAmount() const {
        return amount;
    }

private:
    double amount;
};


class Order {
public:
    Order() : numItems(0) {}  

    
    void addItem(const MenuItem& item, int quantity = 1) {
        for (int i = 0; i < quantity; ++i) {
            if (numItems < MAX_ORDER_ITEMS) {
                orderItems[numItems++] = item;
            }
        }
    }

    void setPayment(const Payment& payment) {
        this->payment = payment;
    }


    const Payment& getPayment() const {
        return payment;
    }

    double totalBillGenerate() const {
        double totalBill = 0.0;
        for (int i = 0; i < numItems; ++i) {
            totalBill += orderItems[i].getPrice();
        }
        return totalBill;
    }

private:
    MenuItem orderItems[MAX_ORDER_ITEMS];
    int numItems;
    Payment payment;
};


class RestaurantOrderingSystem {
public:
    RestaurantOrderingSystem(Menu* pMenu) : menu(pMenu) {}

   
    void placeOrder(const Order& order) {
        
        std::cout << "Order placed. Total amount to pay: $" << order.getPayment().getAmount() << "\n";
       
        if (order.totalBillGenerate() > 0) {
            std::cout << "Total Bill: $" << order.totalBillGenerate() << "\n";
        }
    }

private:
    Menu* menu;  
};

int main() {
    MenuItem item1("Burger", 8.99);
    MenuItem item2("Pizza", 12.99);
    MenuItem item3("Salad", 6.49);

    
    Menu* menu = new Menu();
    menu->addItem(item1);
    menu->addItem(item2);
    menu->addItem(item3);

   
    menu->displayMenu();
    Order order;
    order.addItem(item1);
    order.addItem(item3, 2); 

    Payment orderPayment(21.97); 
    order.setPayment(orderPayment);


    RestaurantOrderingSystem restaurant(menu);

    restaurant.placeOrder(order);

   
    delete menu;

    return 0;
}