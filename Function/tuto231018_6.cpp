/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

bool prime(int);


int main()
{
    
    int num1, result;
    bool b;
    cout<<"Enter Number 1"<<endl;
    
    cin>>num1;
    
  //  b = prime(num1);
    


b=true;

//if(num1 == 0  ||num1==1){
//
//b=false;
//
//}else{
//	
//	for(int i=0;i< num1/2; i++){
//		
//	if(num1%i == 0){
//	
//	b=false;	
//	
//	
//	}
//		
//	}
	
	//
	for(int i = 2; i <= num1; i++)
  {
      if(num1 % i == 0)
      {
          result ++;
      }
  }
	//
	

    
   
if(result>1){
		
		cout<<"The number is not a prime number"<<endl;
	}
	else{
		
		cout<<"The number is a prime number"<<endl;
	}
    
    
    
    system("pause");

    return 0;
}

bool prime(int a){
	
bool b;


b=true;

if(a == 0  || a==1){

b=false;

}else{
	
	for(int i=0;i< a/2; i++){
		
	if(a%i == 0){
	
	b=false;	
	
	
	}
		
	}
	
}

return b;    
    
}



