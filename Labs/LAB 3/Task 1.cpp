/*Name:Urooj Baloch
ID:23k-0071
*/
#include<iostream>
#include<string>
using namespace std;
class boardMarker{
    string brand;
    string shade;
    bool refillable;
    bool status;
    public:
    //making my own constructor
    boardMarker(string brand,string shade,bool refillable,bool status){
    /*using this-> to differentiate between constructor variable and class variable because of
    the same name 
    this->brand refers to the class member, while "brand" refers to the constructor parameter*/
        this->brand=brand;
        this->shade=shade;
        this->refillable=refillable;
        this->status=status;
    }
    void setbrand(string brand){
         this->brand=brand;
    }
    string getbrand(){
        return brand;
    }
    void setshade(string shade){
         this->shade=shade;
    }
    string getshade(){
        return shade;
    }
    void setrefillable(bool refillable){
         this->refillable=refillable;
    }
    bool getrefillable(){
        return refillable;
    }
    void setstatus(bool status){
         this->status=status;
    }
    bool getstatus(){
        return status;
    }
    void writingMethod(){
        if(status==true){
            cout<<"The ink is not run out"<<endl;
        }
        else{
            cout<<"The ink run out"<<endl;
        }
    }
    void refillMethod(){
        if(refillable==true){
            cout<<"The marker can be refilled"<<endl;
        }
        else{
            cout<<"Marker can't be refilled"<<endl;
        }
    }
    void display(){
        cout<<"Brand: "<<brand<<endl;
        cout<<"Shade: "<<shade<<endl;
        cout<<"Status: "<<status<<endl;
        cout<<"Refillable: "<<refillable<<endl;
    }
};
int main(){
    boardMarker M1("Dollar","Black",true,false);
    M1.display();
    M1.writingMethod();
    M1.refillMethod();
}
