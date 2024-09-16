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
	int count;		
	
	public:
		Book(): totalpgs(1000), count(0){
			name = "Unknown";
			author = "Unknown";
			isbn = "Unknown";
		}
		
		void setName(string name)
		{
			this->name = name;
		}
		
		void setAuthor(string author)
		{
			this->author = author;
		}
		
		void setisbn(string number)
		{
			this->isbn = number;
		}
		
		void setPages(int read)
		{
			this->count = read;
		}
		
		int update(int pgs)
		{
			count+=pgs;
			
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
		
		int showBookInfo()
		{
			if(count>totalpgs)
			{
				cout<<"----------------------------------";
				cout<<"Invalid pages entered";
				cout<<"----------------------------------";
				return 0;
				exit(EXIT_FAILURE);
			}
			else
			{
				cout<<"Name: "<<name<<endl;
				cout<<"Author: "<<author<<endl;
				cout<<"ISBN Number: "<<isbn<<endl;
				cout<<"Current pages read: "<<count<<endl;
				cout<<"Total pages: "<<totalpgs<<endl;
			}
			
		}
};

int main(){

	Book b1;
	cout<<endl;
	b1.showBookInfo();
	b1.setName("To kill a mockingbird");
	b1.setAuthor("Anthony Hope Hawkins");
	b1.setisbn("009-987-778-0");
	b1.setPages(23);
	cout<<endl;
	b1.showBookInfo();
	b1.update(54);
	cout<<endl;
	b1.showBookInfo();
	
}