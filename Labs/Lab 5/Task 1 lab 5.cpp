#include<iostream>
using namespace std;

class Square{
	private:
		float sideLength;
		float area;
		static float allareas;
		
	public:
		Square():sideLength(0){
		}
		
		Square(int length):sideLength(length)
		{
		}
		
		float calculateArea()
		{
			area = sideLength*sideLength;
			allareas+=area;
		}
		float getLength()
		{
			return sideLength;
		}
		float getArea()
		{
			return area;
		}
		static float getallareas()
		{
			return allareas;
		}
		void setlength(float newLength)
		{
			this->sideLength=newLength;
		}
		void setarea(float newarea)
		{
			this->area=newarea;
		}
		static void setallareas(float value)
		{
			allareas=value;
		}
};
float Square::allareas =0;
int main()
{
	cout<<"------------------------Displaying the information for square 1------------------------"<<endl;
	Square s1(32);
	s1.calculateArea();
	cout<<"Side length"<<s1.getLength()<<endl;
	cout<<"Area: "<<s1.getArea()<<endl;
	cout<<"All areas value: "<<s1.getallareas()<<endl;
	cout<<"------------------------Displaying the information for square 2------------------------"<<endl;
	Square s2(2);
	s2.calculateArea();
	cout<<"Side length"<<s2.getLength()<<endl;
	cout<<"Area: "<<s2.getArea()<<endl;
	cout<<"All areas value: "<<s2.getallareas()<<endl;
	cout<<"------------------------Displaying the information for square 3------------------------"<<endl;
	Square s3(3);
	s3.calculateArea();
	cout<<"Side length"<<s3.getLength()<<endl;
	cout<<"Area: "<<s3.getArea()<<endl;
	cout<<"All areas value: "<<s3.getallareas()<<endl;
	
}