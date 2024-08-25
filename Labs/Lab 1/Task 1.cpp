/*
Name:Urooj Baloch
ID:23k-0071
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    bool isPrime=true;
cout<<"Enter any number"<<endl;
cin>>n;
if(n==0||n==1){
    cout<<"Number is not prime"<<endl;
}
for(int i=2;i<=n/2;i++){
    if(n%i==0){
        isPrime=false;
        break;
}
}
if(isPrime){
    cout<<"Number is prime"<<endl;
}
else{
    cout<<"Number is not prime"<<endl;
}
}
 
