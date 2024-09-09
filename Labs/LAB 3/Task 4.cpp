/*Name:Urooj Baloch
ID:23k-0071
*/
#include <iostream>
#include <string>
using namespace std;
class Smartphone {
    string brand;
    string model;
    string displayResolution;
    int ram;  
    int rom;  
    int storage; 
public: 
    Smartphone(string brand, string model, string displayResolution, int ram, int rom, int storage) {
        this->brand = brand;
        this->model = model;
        this->displayResolution = displayResolution;
        this->ram = ram;
        this->rom = rom;
        this->storage = storage;
    }
    void setBrand(string brand) {
        this->brand = brand;
    }
    string getBrand() {
        return brand;
    }
    void setModel(string model) {
        this->model = model;
    }
    string getModel() {
        return model;
    }
    void setDisplayResolution(string displayResolution) {
        this->displayResolution = displayResolution;
    }
    string getDisplayResolution() {
        return displayResolution;
    }
    void setRAM(int ram) {
        this->ram = ram;
    }
    int getRAM() {
        return ram;
    }
    void setROM(int rom) {
        this->rom = rom;
    }
    int getROM() {
        return rom;
    }
    void setStorage(int storage) {
        this->storage = storage;
    }
    int getStorage() {
        return storage;
    }   
    void makeCall(string number) {
        cout << "Calling " << number << ".." << endl;
    }
    void sendMessage(string number, string message) {
        cout << "Sending message to " << number << ": " << message << endl;
    }
    void connectToWiFi(string networkName) {
        cout << "Connecting to WiFi network: " << networkName << endl;
    }
    void browseInternet(string url) {
        cout << "Browsing: " << url << endl;
    }
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Display Resolution: " << displayResolution << endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "ROM: " << rom << " GB" << endl;
        cout << "Storage: " << storage << " GB" << endl;
    }
};

int main() {
    Smartphone phone1("Google", "Pixel 6", "2532x1170", 5, 510, 130);
    phone1.display();
    phone1.makeCall("+923009765465");
    phone1.sendMessage("+923009765465", "Hello!");
    phone1.connectToWiFi("FAST NUCES");
    phone1.browseInternet("www.oopbasics.com");

    return 0;
}
