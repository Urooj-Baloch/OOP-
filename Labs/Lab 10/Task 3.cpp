/*
Name:Urooj baloch
ID:23K-0071
*/
#include<iostream>
using namespace std;

class Shape{
	private:
		double length;
		double breadth;
	public:
		Shape(double l, double b): length(l), breadth(b)
		{
		}
		
		double area()
		{
			return (length*breadth);
		}
		
		void operator+ (Shape& obj)
		{
			double ans;
			ans = area() + obj.area();
			cout<<"Addition of areas: "<<ans<<endl;
		}
};

int main()
{
	Shape shape1(2, 3);
	Shape shape2(4, 5);
	shape1+shape2;
	
	return 0;
}