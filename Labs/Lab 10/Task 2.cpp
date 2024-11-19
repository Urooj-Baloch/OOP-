/*
Name:Urooj baloch
ID:23k-0071
*/
#include<iostream>
using namespace std;

class Base{
public:
    int num;
    Base(int x){
    	this->num = x;
	}
    Base operator--(){
        return num * 4;
    } 
    Base operator--(int){
        return num / 4;
    } 
    void display(){
        cout<<"Value is: "<<num;
    }

};

int main(){
    Base b1(20);
    b1 = --b1;
    cout<<"Displaying the prefix operator"<<endl;
    b1.display();
    cout<<endl;
    b1 = b1--;
    cout<<"Displaying the postfix operator"<<endl;
    b1.display();
}