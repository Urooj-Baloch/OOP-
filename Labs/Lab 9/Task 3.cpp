#include<iostream>

using namespace std;

class Employee{
	protected:
		string employeeID, employeeName;
	public:
		Employee(string ID, string name)
		{
			this->employeeID=ID;
			this->employeeName= name;
		}
		
		virtual double calculatePay() const{return 0.0;}
		
		virtual void displayDetails() const{}
};

class FullTimeEmployee: public Employee{
	private:
		int monthlysalary;
		
	public:
		FullTimeEmployee(string Id, string name, int monthlysalary):Employee(Id, name), monthlysalary(monthlysalary){
		}
		double calculatePay() const{
		return monthlysalary;
		}
		void displayDetails() const{
			cout<<"Name of the employee: "<<employeeName<<endl;
			cout<<"Employee ID: "<<employeeID<<endl;
			cout<<"Type: Full time employee"<<endl;
			cout<<"Monthly Salary: "<<calculatePay()<<endl;
		}
};

class PartTimeEmployee:public Employee{
	private:
		int hourlyWage;
		int hours;
		double calculatePay() const{
		return hourlyWage*hours;
		}
		public:
		PartTimeEmployee(string id, string name, int wage, int hours):Employee(id, name),hourlyWage(wage),hours(hours){
		}
		void displayDetails() const{
			cout<<"Name of the employee: "<<employeeName<<endl;
			cout<<"Employee ID: "<<employeeID<<endl;
			cout<<"Type: Part-time employee"<<endl;
			cout<<"Hourly pay: "<<hourlyWage<<endl;
			cout<<"Hours worked: "<<hours<<endl;
			cout<<"Total pay: "<<calculatePay()<<endl;
		}
};
int main()
{
	FullTimeEmployee Anwar("23k-0001", "Anwar", 25000);
	PartTimeEmployee Sajid("23i-0090","Sajid",200, 4);
	
	cout<<"Full time employee details: "<<endl;
	Anwar.displayDetails();
	cout<<endl<<endl;
	cout<<"Part time employee details: "<<endl;
	Sajid.displayDetails();
	
	cout<<endl<<"USING BASE CLASS POINTER:"<<endl;
	Employee* emp1;
	Employee* emp2;
	
	emp1=&Anwar;
	emp2=&Sajid;
	
	cout<<"Full time employee payment: "<<emp1->calculatePay()<<endl;
	cout<<"Part time employee payment: "<<emp2->calculatePay()<<endl;
	
}