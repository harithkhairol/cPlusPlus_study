/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int min(int,int,int);


int main()
{
    
    int num1, num2, num3, result;
    cout<<"Enter Number 1"<<endl;
    
    cin>>num1;
    
    cout<<"Enter Number 2"<<endl;
    
    cin>>num2;
    
    cout<<"Enter Number 3"<<endl;
    
    cin>>num3;
    
    result=min(num1,num2,num3);
    
    cout<<"The Minimum is "<<result<<endl;
    
    system("pause");

    return 0;
}

int min(int no1, int no2, int no3){
	
	int low;
	
	if(no3>=no1 && no2>=no1){
		low=no1;
	}else if(no3>=no2 && no1>=no2)
	{
		low=no2;
	}else if(no1>=no3 && no1>=no3)
	{
		low=no3;
	}else{
		low=01234567;
	}
    
    return low;
}



