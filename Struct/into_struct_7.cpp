#include <iostream>
#include <iomanip>
using namespace std;
struct Employee  // declare a global data type
{
  int idNum;
  double payRate;
  double hours;
};

Employee getValues(); //function prototype
int main()
{
  Employee emp; //a variable of type Employee
  emp = getValues(); //assign result(a structure) to emp
  cout << "\nThe employee ID number is " << emp.idNum
       << "\nThe employee pay rate is $" << emp.payRate
       << "\nThe employee hours are " << emp.hours << endl;
  return 0;
}

Employee getValues() 
{
   Employee next;

   next.idNum = 6789;
   next.payRate = 16.25;
   next.hours = 38.0;

   return next;
}


