/*Name:Urooj Baloch
ID:23k-0071
*/
#include <iostream>
#include <string>
using namespace std;
class WaterBottle {
private:
    string company;
    string color;
    float capacity; 
public:
    WaterBottle(string company, string color, float capacity) {
        this->company = company;
        this->color = color;
        this->capacity = capacity;
    }
    void setCompany(string company) {
        this->company = company;
    }
    string getCompany() const {
        return company;
    }
    void setColor(string color) {
        this->color = color;
    } 
    string getColor() const {
        return color;
    }
    void setCapacity(float capacity) {
        this->capacity = capacity;
    }
    float getCapacity() const {
        return capacity;
    }
    void updateCapacity() {
        float consumedMilliliters;
        cout << "Enter the amount of water consumed in milliliters: ";
        cin >> consumedMilliliters;
        float consumedLiters = consumedMilliliters / 1000;
        if (capacity >= consumedLiters) {
            capacity -= consumedLiters;
            cout << "Updated capacity in liters: " << capacity << endl;
        } else {
            cout << "Not enough capacity to consume that amount. The amount is too large." << endl;
        }
    }
    void display(){
        cout << "Company: " << company << endl;
        cout << "Color: " << color << endl;
        cout << "Capacity: " << capacity << " liters" << endl;
    }
};
int main() {
       WaterBottle B1("Refresh Springs", "pink",3.0);
        B1.updateCapacity();
        B1.display();
}
