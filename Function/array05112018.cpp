#include <iostream>
using namespace std;
const int REPEAT_SLOPE=4;

double findSlope(double[REPEAT_SLOPE]);

int main()
{
	double points[REPEAT_SLOPE];
	int number;
	double result;
	
	for(int i=0;i<4;i++){
	
		
	cout<<"Enter p1"<<endl; 
	cin>>points[0];
	
	cout<<"Enter q1"<<endl; 
	cin>>points[1];
	
	cout<<"Enter p2"<<endl; 
	cin>>points[2];
	
	cout<<"Enter q2"<<endl; 
	cin>>points[3];
	
	result=findSlope(points);
	
	}

 
    system("pause");
}


double findSlope(double sloppy[REPEAT_SLOPE]){
	
	double pp1=sloppy[0];
	double qq1=sloppy[1];
	double pp2=sloppy[2];
	double qq2=sloppy[3];
	
	double result = (qq2-qq1)/(pp2-pp1);
	
		
	cout<<"Point1: "<<"("<<pp1<<","<<qq1<<")"<<endl;
	cout<<"Point2: "<<"("<<pp2<<","<<qq2<<")"<<endl;
	cout<<"Slope: "<<result<<endl;
	
	
	
	return 0;
    

}

