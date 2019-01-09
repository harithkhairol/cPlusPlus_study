/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

void f1();

void f2(int);

int f3(int);

int main()
{
	
	int n, fun;
	
	cout<<"Enter Number: ";
	
	cin>>n;
     
    f1();
    
    f2(n);
    
    fun = f3(n);
    
    cout<<"The Number is: "<<fun<<endl;
    
    system("pause");

    return 0;
}


void f1(){
    
    cout << "F1:"<<endl;
    cout << "Good Morning"<<endl;
    
}

void f2(int num){
    
    cout << "F2:"<<endl;
    
    for(int i=0;i<num;i++){
    	
    cout << "Good Morning"<<endl;
    	
	}
        
}

int f3(int num){
	
	   
    cout << "F3:"<<endl;
    
    for(int i=0;i<num;i++){
    	
    cout << "Good Morning"<<endl;
    	
	}
	
	
	
	return num;
        
}


