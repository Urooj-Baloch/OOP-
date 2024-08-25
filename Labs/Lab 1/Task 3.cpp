/*Name:Urooj Baloch
ID:23k-0071
*/
#include<iostream>
using namespace std;
int main(){
    int target;
    int sum;
    int size;
    cout<<"Enter the size of array:"<<endl;
    cin>>size;
    int num[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the element:"<<i<<endl;
        cin>>num[i];
    }
    cout<<"Enter the target element"<<endl;
    cin>>target;
 for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        sum=num[i]+num[j];
        if(sum==target){
            cout<<"The indices are["<<i <<","<<j<<"]"<<endl;
             return 0;
        }
    }
 }
    cout << "No pair found that sums to the target." << endl;
}