/*Name:Urooj Baloch
ID:23K-0071
*/
#include<iostream>
using namespace std;

const double pi = 3.142;

class Shape{
	
	public:
		
		double area(double radius)
		{
			return radius*radius;
		}
		
		int area(int length, int width)
		{
			return length*width;
		}
		
		double area(double base, double height)
		{
			return (0.5*base*height);
		}
		
		double perimeter(double radius)
		{
			return (2*pi*radius);
		}
		
		double perimeter(double length, double width)
		{
			return ((2*length) + (2*width));
		}
		
		double perimeter(double side1, double side2, double side3)
		{
			return (side1+side2+side3);
		}
};

int main()
{
	Shape circle;
	Shape rectangle;
	Shape triangle;
	
	double radiusCircle=5;
	int length=8;
	int width=9;
	double base= 9.0;
	double height = 10;
	double side1=96, side2=98, side3=80;
	
	cout<<"Area of he circle: "<<circle.area(radiusCircle)<<endl;
	cout<<"Perimeter of the circle: "<<circle.perimeter(radiusCircle)<<endl;
	
	
	cout<<"Area of he Rectangle: "<<rectangle.area(length, width)<<endl;
	cout<<"Perimeter of the Rectangle: "<<rectangle.perimeter(length, width)<<endl;
	
	
	cout<<"Area of he Triangle: "<<triangle.area(base, height)<<endl;
	cout<<"Perimeter of the Triangle: "<<triangle.perimeter(side1, side2, side3)<<endl;
}
