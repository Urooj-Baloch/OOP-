/*Name:Urooj Baloch
ID:23k-0071
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

class WeekDays{
	
	private:
		string Days[7];
		int CurrentDay;
		
	public:
		WeekDays(int day)
		{
			if(day>7)
			{
				cout<<"Invalid day number";
				exit(EXIT_FAILURE);
			}
			else
			{
				Days[0]="Sunday";
			Days[1]="Monday";
			Days[2]="Tuesday";
			Days[3]="Wednesday";
			Days[4]="Thursday";
			Days[5]="Friday";
			Days[6]="Saturday";
			
			this->CurrentDay =(day % 7 + 7) % 7;
			
			string tempDays[7];
    	for (int i = 0; i < 7; ++i) {
        	tempDays[i] = Days[(CurrentDay + i) % 7];
    	}
    	// Copy values back to the original array
    for (int i = 0; i < 7; ++i) {
        Days[i] = tempDays[i];
    }
    
    // Copy values back to the original array
    for (int i = 0; i < 7; ++i) {
        Days[i] = tempDays[i];
    }
		}
		}

    
		
		void getCurrentDay()
		{
			cout<<"The current day is "<<Days[0]<<endl;
		}
		
		void getNextDay()
		{
			cout<<"The next day is "<<Days[1]<<endl; 
		}
		
		void getPreviousDay()
		{
			cout<<"The previous day is "<<Days[6]<<endl; 
		}
		
		void getNthDay(int addDays)
		{
			cout<<"The Nth day from "<< Days[0] <<" is "<<Days[(0+addDays)%7]<<endl;
		}
		
		void displayWeek()
		{
			for(int i =0; i<7; i++)
			{
				cout<<Days[i]<<endl;
			}
		}
		
};
			


int main()
{
	WeekDays w1(1);
	//w1.displayWeek();
	w1.getCurrentDay();
	w1.getNextDay();
	w1.getPreviousDay();
	w1.getNthDay(5);
}