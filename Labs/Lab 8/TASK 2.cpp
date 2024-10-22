/*Name: Urooj Baloch
ID:23K-0071
*/
#include<iostream>
#include<string>
using namespace std;

class Character{
 protected:
  int health;
  int damage;
 public:
  Character(int health, int damage): health(health), damage(damage)
  {}
  
  void display()
  {
   cout<<"Health: "<<health<<endl;
   cout<<"Damage: "<<damage<<endl; }
   
  
};
class Enemy:public Character{
 public:
  Enemy(int health, int damage):Character(health, damage)
  {
  }
  void display()
  {
   cout<<"Health: "<<health<<endl;
   cout<<"Damage: "<<damage<<endl; }
};  
	
class Player:public Character{
 public:
  Player(int health, int damage):Character(health, damage)
  {
  }
  void display()
  {
   cout<<"Health: "<<health<<endl;
   cout<<"Damage: "<<damage<<endl; }
}; 

class Wizard:protected Player{
 private:
  int magicPower;
  string spells;
  
 public:
  Wizard(int magicPower, string spells, int health, int damage):Player(health, damage), magicPower(magicPower), spells(spells)
  {
  }
  
  void display()
  {
   cout<<"------------Displaying the information for wizard---------"<<endl;
   cout<<"Health: "<<health<<endl;
   cout<<"Damage: "<<damage<<endl; 
   cout<<"Magic Power: "<<magicPower<<endl;
   cout<<"Spells: "<<spells<<endl;
  }
}; 
int main()
{
 Wizard w1(3, "shaka laka boom",90, 10);
 w1.display();
}
#
