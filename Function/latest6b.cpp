#include <iostream>
using namespace std;

double findSlope(double, double, double, double);

int main()
{
	
	double p1, q1, p2, q2, result;
	
	do{
	
	
	cout<<"Enter p1"<<endl; 
	cin>>p1;
	
	cout<<"Enter q1"<<endl; 
	cin>>q1;
	
	cout<<"Enter p2"<<endl; 
	cin>>p2;
	
	cout<<"Enter q2"<<endl; 
	cin>>q2;
	
	result=findSlope(p1,q1,p2,q2);
	
	}while(1);	

 
    system("pause");
}


double findSlope(double pp1, double qq1, double pp2, double qq2){
	
	
	double result = (qq2-qq1)/(pp2-pp1);
	
		
	cout<<"Point1: "<<"("<<pp1<<","<<qq1<<")"<<endl;
	cout<<"Point2: "<<"("<<pp2<<","<<qq2<<")"<<endl;
	cout<<"Slope: "<<result<<endl;
	
	
	
	return 0;
    

}

