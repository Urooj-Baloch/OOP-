/*Name:Urooj Baloch
ID:23k-0071
*/
#include<iostream>
#include<cstdlib>
using namespace std;

class Book{
	string name;
	string author;
	string isbn;
	int totalpgs;
	int count;		// number of pages read yet
	
	public:
		Book(){
			name = "Unknown";
			author = "Unknown";
			isbn = "Unknown";
			totalpgs = 0;
			count = 0;
		}
		
		Book(string name, string author, string isbn, int count, int totalpgs)
		{
			this->name = name;
			this->author = author;
			this->isbn = isbn;
			this->count = count;
			this->totalpgs = totalpgs;
		}
		
		int update(int pgs)
		{
			count+=pgs;
			
			if(count<totalpgs)
			{
				cout<<"--------------------------------"<<endl;
				cout<<"Name: "<<name<<endl;
				cout<<"Author: "<<author<<endl;
				cout<<"ISBN Number: "<<isbn<<endl;
				cout<<"Current pages read: "<<count<<endl;
				cout<<"Total pages: "<<totalpgs<<endl;
				cout<<"--------------------------------"<<endl;
				//cout<<"You have read all the pages";
			}
			if(count==totalpgs)
			{
				cout<<"Name: "<<name<<endl;
				cout<<"Author: "<<author<<endl;
				cout<<"ISBN Number: "<<isbn<<endl;
				cout<<"Current pages read: "<<count<<endl;
				cout<<"Total pages: "<<totalpgs<<endl;
				cout<<"You have read all the pages";
			}
			
			else if(count>totalpgs)
			{
				cout<<"----------------------------------";
				cout<<"Invalid pages entered";
				cout<<"----------------------------------";
				return 0;
				exit(EXIT_FAILURE);
			}
		}
		
		void display()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Author: "<<author<<endl;
			cout<<"ISBN Number: "<<isbn<<endl;
			cout<<"Current pages read: "<<count<<endl;
			cout<<"Total pages: "<<totalpgs<<endl;
		}
};

int main(){
	
	Book b1("The Valley of fear", "Sherlock Holmes", "098-987-0086-123", 56, 1000);
	b1.display();
	b1.update(54);
	cout<<endl;
	//b1.display();
}