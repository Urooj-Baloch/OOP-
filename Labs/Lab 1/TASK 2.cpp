/*Name:Urooj Baloch
ID:23k-0071
*/
#include<iostream>
using namespace std;
int main(){
    int noOfStudents;
    int sub=3;
    int eng;
    int sci;
    int maths;
    int avg;
    int total;
    char grade;
    cout<<"Enter the number of students:"<<endl;
    cin>>noOfStudents;
    for(int i=1;i<=noOfStudents;i++){
        
        cout<<"Enter the marks in English of student "<<i<<endl;
        cin>>eng;
        cout<<"Enter the marks in Science of student "<<i<<endl;
        cin>>sci;
        cout<<"Enter the marks in maths of student "<<i<<endl;
        cin>>maths;
        total=eng+maths+sci;
        avg=total/3;
        cout<<"Total marks of student "<<i<<" are"<<":"<< total<<endl;
        cout<<"Average marks of student "<<i<<" is"<<":"<<avg<<endl;
        if(avg >= 90)
            grade = 'A';
        else if(avg >= 80)
            grade = 'B';
        else if(avg >= 70)
            grade = 'C';
        else if(avg >= 60)
            grade = 'D';
        else
            grade = 'F';

        cout << "Grade of student " << i << ": " << grade << endl << endl;
    }
    }
    
