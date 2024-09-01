/*Name:Urooj Baloch
ID:23k-0071
*/
#include<iostream>
using namespace std;
struct Register{
	string courseID;
	string courseName;
};
struct student:Register{
	string studentID;
	string firstName;
	string lastName;
	string email;
	string cellNo;
};
int main()
{
	student students[5];
	int i;
	for(i=0;i<5;i++) 
	{
    cout << "Enter the information of student " << (i + 1) << ":" << endl;
	cout<<"Enter course ID: ";
	getline(cin, students[i].courseID);
	cout<<"Enter course name: ";
	getline(cin, students[i].courseName);
	cout<<endl;
	cout<<"Enter Student ID: ";
	getline(cin, students[i].studentID);
	cout<<endl;
	cout<<"Enter first name: ";
	getline(cin, students[i].firstName);
	cout<<endl;
	cout<<"Enter last name: ";
	getline(cin, students[i].lastName);
	cout<<endl;
	cout<<"Enter cell number: ";
	getline(cin, students[i].cellNo);
	cout<<endl;
	cout<<"Enter email: ";
	getline(cin, students[i].email);
	cout<<endl;
	}
	//Displaying information of all five students 
	for(i=0;i<5;i++) 
	{
		cout<<"----------------------------------------------"<<endl;
		cout<<"Course ID: "<<students[i].courseID<<endl;
		cout<<"Course Name: "<<students[i].courseName<<endl;
		cout<<"Student ID: "<<students[i].studentID<<endl;
		cout<<"first name: "<<students[i].firstName<<endl;
		cout<<"last name: "<<students[i].lastName<<endl;
		cout<<"Cell number: "<<students[i].cellNo<<endl;
		cout<<"Email: "<<students[i].email<<endl;
	}
}