/*
Name:Urooj baloch
ID:23K-0071
*/
#include<iostream>
using namespace std;

class perimeter{
	private: 
	int length;
	int breadth;
	public:
		perimeter(int l, int b): length(l), breadth(b)
		{
		}
	friend class printClass;
};

class printClass{
	public:
		void display(perimeter& peri)
		{
			cout<<"Length: "<<peri.length;
			cout<<endl;
			cout<<"Width: "<<peri.breadth<<endl;
			
		}
};
int main()
{
	perimeter p1(5,6);
	printClass print;
	print.display(p1);
}