/*Name: Urooj Baloch
ID: 23k-0071
*/
#include<iostream>
using namespace std;

class Office {
    private:
        string location;
        int seatingCapacity;
        string furniture[3]; 

    public:
        
        Office(string loc = " ", int seating = 0, string furn1 = " ", string furn2 = " ", string furn3 = " ") {
            location = loc;
            seatingCapacity = seating;
            furniture[0] = furn1;
            furniture[1] = furn2;
            furniture[2] = furn3;
        }
        
       
        void display() {
            cout << "-------------------------------------------------" << endl;
            cout << "Location: " << location << endl;
            cout << "Seating capacity: " << seatingCapacity << endl;
            cout << "Furniture: " << endl;
            for (int i = 0; i < 3; i++) {
                cout << furniture[i] << endl;
            }
            cout << "-------------------------------------------------" << endl;
        }
};

int main() {
    Office o1("Main road", 50, "Table", "Chairs", "Fans");
    Office o2("Shah Faisal Colony", 100, "Shelves", "Chairs", "Sofas");
    Office o3("Muslim Colony, Qasimabad", 20, "Clock", "Tables", "Cabinets");
    o1.display();
    o2.display();
    o3.display();
    
    return 0;
}
