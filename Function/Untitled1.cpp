/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int calcAvg(int,int);


int main()
{
    
    int num1, num2, average;
    cout<<"Enter Number 1"<<endl;
    
    cin>>num1;
    
    cout<<"Enter Number 2"<<endl;
    
    cin>>num2;
    
    average=calcAvg(num1,num2);
    
    cout<<"Average is "<<average<<endl;
    
    system("pause");

    return 0;
}

int calcAvg(int no1, int no2){
    
    return int(no1+no2)/2;
}



