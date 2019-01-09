#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Employee{
		
	int idNum;
	string name;
	double hours;
		
	};
	
	Employee display();

int main()
{
	
Employee emp;

emp = display();

	cout<<emp.idNum<<endl;
	cout<<emp.name<<endl;
	cout<<emp.hours<<endl;


    system("pause");
    return 0;
}

Employee display(){
	
	Employee next;
	
	next.idNum=1;
	next.name = "Harith";
	next.hours = 90.80;
	
	return next;
}


