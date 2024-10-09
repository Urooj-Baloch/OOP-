/*Name:Urooj Baloch
ID:23K-0071*/
#include<iostream>
using namespace std;

class LoanHelper{
	const float rate;
	float amount;		
	int monthsLoan;		
	
	public:
		LoanHelper(float userRate, float amount, int monthsLoan):rate(userRate), amount(amount), monthsLoan(monthsLoan)
		{
			if(userRate<=0 || userRate>=0.005)
			{
				cout<<"Not a valid rate"<<endl;
				return;
			}
		}
		
		void calculateAmount()
		{
			float amountToPay;
			float interest;
			float monthlyPayment;
			monthlyPayment = amount/monthsLoan;
			interest = monthlyPayment*interest;
			amountToPay=monthlyPayment+interest;
			cout<<"You have to pay "<<amountToPay<<" every month for "<<monthsLoan<<" months to repay your loan."<<endl;
		}
};

int main(){
	LoanHelper Loan1(0.003, 13000, 6);
	Loan1.calculateAmount();
}
