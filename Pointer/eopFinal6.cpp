#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main ()
{

double x = 150;
double y = 320;
double *m = &x;
double *n = &y;

cout<<"Before Value"<<endl;
cout<<"value of x:"<<x<<endl;
cout<<"value of y:"<<y<<endl;
cout<<"value of *m:"<<*m<<endl;
cout<<"value of *n:"<<*n<<endl;

*m = *n;
m = n;
*m = 1000 ; 

cout<<"\nAfter Value"<<endl;
cout<<"\nvalue of x:"<<x<<endl;
cout<<"value of y:"<<y<<endl;
cout<<"value of *m:"<<*m<<endl;
cout<<"value of *n:"<<*n<<endl;

cout<<"\n&m:"<<&m<<endl;
cout<<"*m:"<<*m<<endl;
cout<<"m:"<<m<<endl;

system("pause");
return 0; 

}




