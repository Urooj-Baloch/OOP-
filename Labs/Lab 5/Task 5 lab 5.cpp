/*Name:Urooj Baloch
ID:23K-0071*/
#include<iostream>
#include<string.h>
using namespace std;

class Engine{		//aggregation
	private:
		string name;
	public:
		Engine(string Aname):name(Aname)
		{
			cout<<"Engine started..."<<endl;
		}
		void startEngine()
		{
			cout<<"Engine started..."<<endl;
		}
};

class Wheels{
	//type composition
	private:
		int count;
		
	public:
		Wheels(int count):count(count)
		{
		}
		
		void move()
		{
			cout<<"wheels rotating"<<endl;
		}
		
};

class Headlights{
	private:
		int count;
	public:
		Headlights(int num):count(num)
		{
			cout<<"Headlights: "<<endl;
		}
		void turnOn()
		{
			cout<<"Headlights on"<<endl;
		}
		void turnOff()
		{
			cout<<"Headlights off"<<endl;
		}
};
class Steering{
	//type aggregation
	private:
		string type;
	public:
		Steering(string name):type(name)
		{
			cout<<"Steering type: "<<type<<endl;
		}
		
		void steer()
		{
			cout<<"Steering the Car"<<endl;
		}
};

class Car
{
	private:
		Engine* engine;
		Steering* steering;
		Wheels wheels;
		Headlights headlights;
	public:
		
		void setEngine(Engine* engine)
		{
			this->engine = engine;
		}
		void setSteering(Steering* steering)
		{
			this->steering = steering;
		}
		Car(int wheelCount, int headlightCount):wheels(wheelCount), headlights(headlightCount)
		{}
			void start()
			{
				if(engine)
				{
					engine->startEngine();
				}
			}
			
			void drive()
			{
				
					wheels.move();
				
				
					headlights.turnOn();
				if(steering)
				{
					steering->steer();
				}
			}
			
};
int main()
{
	Engine engine("Power Engine");
	Steering steering1("Power steerings");
	
	Car car1(4, 2);
	car1.setEngine(&engine);
	car1.setSteering(&steering1);
	car1.start();
//	car1->startEngine();
	car1.drive();
	
	return 0;
}
