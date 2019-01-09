#include <iostream>
#include <stdlib.h>
using namespace std;
const int s=100;

int even(int[s]);


int main()
{
	
	int z;
	
	int x=3;
	int y=5;
	
	cout<<"first x = "<<x<<", first y ="<<y<<endl;
	
	z=x;
	x=y;
	y=z;
	
	
	cout<<"swap x = "<<x<<", swap y ="<<y<<endl;

	
 
    system("pause");
    
    return 0;
}






