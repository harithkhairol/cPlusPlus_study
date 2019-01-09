//Lab Test 1

//Question 3

//Muhammad Harith Bin Khairolanuar

//1816349


#include <iostream>
#include <cmath>
using namespace std;

double area (double,double,double);

int main()
{
	
    int num1, num2, num3;
    double result;
    cout<<"Enter Number 1"<<endl;
    
    cin>>num1;
    
    cout<<"Enter Number 2"<<endl;
    
    cin>>num2;
    
    cout<<"Enter Number 3"<<endl;
    
    cin>>num3;
    
    if((num1+num2)<num3){
    	  	
    cout<<"Invalid Input. The sum of to sides is not greater than the third side"<<endl;
    	
	}
	
	else if((num1+num3)<num2){
		
	
	cout<<"Invalid Input. The sum of to sides is not greater than the third side"<<endl;
		
	}
	
	else if((num2+num3)<num1){
		
	cout<<"Invalid Input. The sum of to sides is not greater than the third side"<<endl;
	
		
	}
	
	
	else{
		
	result=area(num1,num2,num3);
	
	cout<<"Area is "<<result<<endl;
	
	}
    	
    system("pause");

    return 0;
}

double area(double no1, double no2, double no3){
    
    double s, area;
    
    s=(no1+no2+no3)/2;
    
    area=sqrt (s*(s-no1)*(s-no2)*(s-no3));
    
    return area;
    
    //return int(no1+no2)/2; sqrt
}





