/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void prime(int);


int main()
{
    
    int num1, result;
    cout<<"Enter Number 1"<<endl;
    
    cin>>num1;
    
   
    prime(num1);
    
    
    
    system("pause");

    return 0;
}

void prime(int no1){
	
	int j=0;
	
	
	for(int i=0;i<=no1;i++){
		
	if(no1%i==0){
					
	j=j+1;	
	
	}
		
	
	}
	
	if(j==2){
		
	cout<<"Answer is true"<<endl;
	}
    else{
    	
    cout<<"Answer is false"<<endl;
	}
    
    cout<<"Answer is LAaa"<<endl;
}



