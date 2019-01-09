// Exercise 5/11/2018
// Muhammad Harith Bin Khairolanuar
// 1816349

#include <iostream>
using namespace std;
const int num=2;

const int pNum=2;
const int qNum=2;


double findSlope(double[pNum], double[qNum]);


int main()
{
//	double points[REPEAT_SLOPE];
	int number;
	double result;
	
	double p[pNum];
	double q[qNum];	

	
	cout << "Enter 2 points of p"<<endl;
	
	for(int i=0;i<4;i++){
	
	for(int i=0; i<num;i++){
		
	cout << "P" << i + 1 << ": ";
	cin >> p[i];
		
		
	}
	
	cout << "Enter 2 points of q"<<endl;
	
	for(int j=0; j<num;j++){
		
	cout << "q" << j + 1 << ": ";
	cin >> q[j];
		
		
	}

	

	
	
	result=findSlope(p , q);

}
 
    system("pause");
}


double findSlope(double pp[pNum], double qq[qNum]){
	
	double pp1=pp[0];
	double qq1=qq[0];
	double pp2=pp[1];
	double qq2=qq[1];
	
	double result = (qq2-qq1)/(pp2-pp1);
	
		
	cout<<"Point1: "<<"("<<pp1<<","<<qq1<<")"<<endl;
	cout<<"Point2: "<<"("<<pp2<<","<<qq2<<")"<<endl;
	cout<<"Slope: "<<result<<endl;
	cout<<"----------------------------------------"<<endl;
	
	
	
	return 0;
    

}

