/*Name: Urooj Baloch
ID:23k-0071
*/
#include<iostream>
using namespace std;

class Person{
	protected:
		string name;
		int age;
	public:
		Person(string name, int age)
		{
			this->name = name;
			this->age = age;
		}
};

class Student:protected Person{
	protected:
		string StudentID;
		string gradeLevel;
	public:
		Student(string name, string StudentID, string gradeLevel, int age):Person(name, age)
		{
			this->StudentID=StudentID;
			this->gradeLevel=gradeLevel;
		}
};

class Teacher:protected Person{
	protected:
		string subject;
		int room;
	public:
		Teacher(string subject, int room, string name, int age):Person(name, age)
		{
			this->subject=subject;
			this->room = room;
		}
};

class  GraduateStudent:protected Student, protected Teacher{
	public: 
		GraduateStudent(string name1, string name2, int age1, int age2, int room, string subject, string StudentID, string gradeLevel):Student(name1, StudentID, gradeLevel,age1),Teacher(subject,room,name2,age2)
		{
		}
		
		void display()
		{
			cout<<"-------------Displaying student's information------------"<<endl<<endl;
			cout<<"Name of the student: "<<Student::name<<endl;
			cout<<"Student ID: "<<StudentID<<endl;
			cout<<"Age: "<<Student::age<<endl;
			cout<<"Grade Level: "<<gradeLevel<<endl;
			cout<<"-------------Displaying teacher's information------------"<<endl<<endl;
			cout<<"Name of the teacher: "<<Teacher::name<<endl;
			cout<<"Room number: "<<room<<endl;
			cout<<"Age: "<<Teacher::age<<endl;
			cout<<"Subject: "<<subject<<endl;
			
		}
};
int main()
{
	GraduateStudent student1("Urooj Baloch", "Ms:Uzma",22, 35, 2, "Calculus", "k23-0071", "BSAI-2A");
	student1.display();
}