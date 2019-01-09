#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Employee{
		
	int idNum;
	double payRate;
	double hours;
		
	};
	
	double calcNet(Employee);

int main()
{
	
Employee emp = {6782, 8.94, 40.5};
double netPay;

netPay = calcNet(emp);

cout<<setw(10)<<setiosflags(ios::fixed)<<setiosflags(ios::showpoint)<<setprecision(2);

cout<<"The net pay foe employee "<<emp.idNum<<" is $"<<netPay<<endl;

    system("pause");
    return 0;
}

double calcNet(Employee temp){
	
	return (temp.payRate * temp.hours);
}


