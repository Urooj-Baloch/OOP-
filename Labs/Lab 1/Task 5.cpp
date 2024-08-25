/*
Name:Urooj Baloch
ID:23K-0071
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of events: "<<endl;
    cin >> n;
    cin.ignore(); 
    string* name = new string[n];
    string* date = new string[n];
    string* venue = new string[n];
    string* organizer = new string[n];
    for (int i = 0; i < n; ++i) {
        cout << "Event " << (i + 1) << endl;;
        cout << "Event Name: ";
        getline(cin, name[i]);
        cout << "Date: ";
        getline(cin, date[i]);
        cout << "Venue: ";
        getline(cin, venue[i]);
        cout << "Organizer: ";
        getline(cin, organizer[i]);
        cout << endl;
    }
    string searchDate;
    cout << "Enter date to search events: ";
    getline(cin, searchDate);
    cout << "Events on " << searchDate << endl;
    bool found = false;
    for (int i = 0; i < n; ++i) {
        if (date[i] == searchDate) {
            cout << "Event Name: " << name[i] << endl;
            cout << "Date: " << date[i] << endl;
            cout << "Venue: " << venue[i] << endl;
            cout << "Organizer: " << organizer[i] << endl;
            cout << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "No events found on your searched date!" << endl;
    }
    delete[] name;
    delete[] date;
    delete[] venue;
    delete[] organizer;

}
