/*Name:Urooj
ID:23k-0071
*/
#include<iostream>
using namespace std;

class Position{
	protected:
		int x,y,z;
	public:
		Position(int x, int y, int z):x(x),y(y),z(z)
		{
		}
	
};

class Health{
	protected:
		int health;
		
	public:
		Health(int health):health(health)
		{
		}
};

class Character:public Health, public Position{
	private:
		string name;
		float height;
		int weight;
		
	public:
		Character(int health, int x, int y, int z, string name, double height, int weight):Position(x,y,z),Health(health)
		{
			this->name = name;
			this->height=height;
			this->weight = weight;
		}
		
		void display()
		{
			cout<<"-----------Displaying the character's data-------------"<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Height: "<<height<<endl;
			cout<<"Weight: "<<weight<<endl;
			cout<<"Position: ("<<x<<", "<<y<<", "<<z<<")"<<endl;
			cout<<"Health: "<<health<<endl;
		}
		
		void updateHealth(int health)
		{
			this->health=health;
		}
		
		void updateWeight(int weightToAdd)
		{
			this->weight+=weight;
		}
		
		void changePosition(int a, int b, int c)
		{
			this->x=a;
			this->y=b;
			this->z=c;
		}
};

int main()
{
	Character c1(78, 2, 4, 12, "Gumiho", 2.5, 20);
	c1.display();
	cout<<"Updating the information"<<endl;
	c1.updateHealth(80);
	c1.updateWeight(15);
	c1.changePosition(10, 3, -8);
	
	c1.display();
}