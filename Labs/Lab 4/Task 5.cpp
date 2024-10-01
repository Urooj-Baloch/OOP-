#include<iostream>
using namespace std;

class Office {
private:
    string location;
    int SeatingCapacity;
    string furniture[10]; 
    int size;

public:
    Office(string loc = " ", int Seating = 0, int sz = 0) : location(loc), SeatingCapacity(Seating), size(sz) {
        cout << "Start entering the furniture for your office (max 10 items):" << endl;
        for (int i = 0; i < size; i++) {
            cout << "Enter furniture item " << (i + 1) << ": ";
            getline(cin, furniture[i]); 
        }
    }

    void display() {
        cout << "-------------------------------------------------" << endl;
        cout << "Location: " << location << endl;
        cout << "Seating capacity: " << SeatingCapacity << endl;
        cout << "Furniture: " << endl;
        for (int i = 0; i < size; i++) {
            cout << furniture[i] << endl;
        }
        cout << "-------------------------------------------------" << endl;
    }
};

int main() {
    Office *o1 = new Office("Main road", 50, 3);
    cout << "Office 1 " << endl;
    o1->display();

    Office *o2 = new Office("Shah Faisal Colony", 100, 2);
    cout << "Office 2 " << endl;
    o2->display();

    Office *o3 = new Office("Muslim Colony, Qasimabad", 20, 3);
    cout << "Office 3 " << endl;
    o3->display();

    delete o1;
    delete o2;
    delete o3;

    return 0;
}
