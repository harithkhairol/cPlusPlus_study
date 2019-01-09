#include <iostream>
#include <iomanip>
using namespace std;
struct Employee  // declare a global type
{
  int idNum;
  double payRate;
  double hours;
};

double calcNet(Employee *); //function prototype
int main()
{
  Employee emp = {6782, 8.93, 40.5};
  double netPay;
   //pass an address
   netPay = calcNet(&emp);//assign return value to netPay 
   // set output formats
   cout << setw(10)
        << setiosflags(ios::fixed)
        << setiosflags(ios::showpoint)
        << setprecision(2);
   cout << "The net pay for employee " << emp.idNum
        << " is $" << netPay << endl;
   return 0;
}

//function header
double calcNet(Employee *pt) // pt is a pointer to a
{ 			           // structure of Employee type
  return (pt->payRate * pt->hours);
} 
