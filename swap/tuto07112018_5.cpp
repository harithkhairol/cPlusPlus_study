#include <iostream>
#include <stdlib.h>
using namespace std;
const int s=10;

int inverse(int[s]);


int main()
{
	int x;
	int num[s]={1,3,5,7,9,11,13,15,17,19};
	



for(int i=0;i<s/2;i++){

	x=num[i];
	
	num[i]=num[s-1-i];
	
	num[s-1-i]=x;
	
	
}

for(int i=0;i<s;i++){

	cout<<num[i]<<endl;
}
	
		
	
	

	
 
    system("pause");
    
    return 0;
}







