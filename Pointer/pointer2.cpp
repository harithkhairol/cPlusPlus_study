#include <iostream>

using namespace std;

void swap(double *, double *);

int main()
{
	
	double firstnum=20.5, secnum = 6.25;
	
	swap(&firstnum, &secnum);
	
	
    system("pause");

    return 0;
}


void swap(double *num1Addr, double *num2Addr){

cout<<"num1Addr is "<<*num1Addr<<endl;
cout<<"num2Addr is "<<*num2Addr<<endl;
	
}

