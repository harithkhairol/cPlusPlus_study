/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int min(int,int);


int main()
{
    
    int num1, num2, result;
    cout<<"Enter Number 1"<<endl;
    
    cin>>num1;
    
    cout<<"Enter Number 2"<<endl;
    
    cin>>num2;
    
    result=min(num1,num2);
    
    cout<<"The Minimum is "<<result<<endl;
    
    system("pause");

    return 0;
}

int min(int no1, int no2){
	
	int low;
	
	if(no1>no2){
		low=no2;
	}else{
		low=no1;
	}
    
    return low;
}



