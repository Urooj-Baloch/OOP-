/*Name: Urooj Baloch
ID:23k-0071
*/
#include <iostream>
#include <string>
using namespace std;

class Calender{
private:
    static const int month = 12;
    static const int days = 31;
    string arr[month][days];
    int currentYear;

public:
    
    Calender(int year) : currentYear(year) {
        for(int i = 0; i < 12; i++){
            for(int j = 0; j < 31; j++){
                arr[i][j] = "";
            }
        }
    }

    void add(string task, int month, int day){
        if(month >= 1 && month <= 12 && day >= 1 && day <=31){
            arr[month-1][day-1] = task;
            cout << "Task added successfully." << endl;
        } else {
            cout << "Invalid input!!!!" << endl;
        }
    }

    void remove(int month, int day){
        if(month >= 1 && month <= 12 && day >= 1 && day <=31){
            arr[month-1][day-1] = "";
            cout << "Task deleted successfully." << endl;
        } else {
            cout << "Invalid input" << endl;
        }
    }

    void display(){
        cout << "\nTasks are \n" ;
        for(int i = 0; i < 12; i++){
            for(int j = 0; j < 31; j++){
                string task = arr[i][j];
                if(!task.empty()){
                    cout << task << " on " << j + 1 << " - " << i + 1 << " - " << currentYear << endl;
                }
            }
        }
    }
};

int main(){
    Calender calendar1(2024);
	calendar1.display();
    calendar1.add("Do Discrete assignment", 4, 31);
    calendar1.add("to delete", 1, 2);
    calendar1.remove(1, 2);
    calendar1.add("Dusting", 5, 4);
	
    calendar1.display();

    return 0;
}