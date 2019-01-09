#include <iostream>
#include <stdlib.h>
using namespace std;
const int s=100;

int even(int[s]);


int main()
{
	
	int num[s];
	int result;
	
	
	
	for (int i=0;i<s;i++){
		
	num[i]=rand();
		
	}
	
	
	result= even(num);
	

	cout<<"The number is: "<<result<<endl;
	
	
	
 
    system("pause");
    
    return 0;
}

int even(int result[s]){
	
	int count=0;
	
	
	for (int j=0;j<100;j++){
		
	   if(result[j]%2==0){
	   	count++;
	   }
		
	}
	
	return count;

    

}





