/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

#include <cmath>

using namespace std;

double calcVol(double,double);


int main()
{
    
    double radius, height,vol;
        
    cout<<"Enter Radius"<<endl;
    
    cin>>radius;
    
    cout<<"Enter Height"<<endl;
    
    cin>>height;
    
    
    
    vol=calcVol(radius,height);
    
    cout<<"Vol is "<<vol<<endl;
    
    system("pause");

    return 0;
}

double calcVol(double radius2, double height2){
	
	double pi=3.142; 
    
    return double(pi*(pow(radius2,2))*(height2/3));
}



