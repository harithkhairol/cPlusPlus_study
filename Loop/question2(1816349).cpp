//Lab Test 1

//Question 2

//Muhammad Harith Bin Khairolanuar

//1816349


#include <iostream>
using namespace std;

int main()
{
	
	double loanAmount,numOfYears,interestRate;
	double interest, loanWithInterest;
	double numOfMonth,monthlyPayment;
	double balance;
	
	cout<<"enter loan amount:\t";
	
	cin>>loanAmount;
	
			
	cout<<"enter number of years:\t";
	
	cin>>numOfYears;
	
		
	cout<<"enter interest rate amount:\t";
	
	cin>>interestRate;
	
	interest=loanAmount*interestRate;
	
	loanWithInterest=loanAmount+interest;
	
	
	cout<<endl;
	
	cout<<"----------------------------------------------------"<<endl;
	
	cout<<endl;
	
	numOfMonth=numOfYears*12;
	
	monthlyPayment=loanWithInterest/numOfMonth;
	
	cout<<"Total loan with interest:\t"<<loanWithInterest<<endl;
	cout<<"Monthly payment:\t"<<monthlyPayment<<endl;
	
	cout<<endl;
	
	cout<<"----------------------------------------------------"<<endl;
	
	cout<<endl;
	
	cout<<"Payment#       Balance"<<endl;
	
	cout<<endl;
	
	cout<<"**********     ***********"<<endl;
	
	cout<<endl;
	
	balance=loanWithInterest;
	
	for(int i=1;i<=numOfMonth;i++){
		
	if(i==1){
		
	
	cout<<i<<"       I      0"<<endl;
		
	}
	
	else
	
	{
		
	balance=balance-monthlyPayment;
	
	cout<<i<<"       I      "<<balance<<endl;
		
		
	}
		
	
		
		
	}
	
	cout<<endl;
	
	cout<<"Thank you for your full loan settlement"<<endl;
		
	
	
    system("pause");

    return 0;
}





