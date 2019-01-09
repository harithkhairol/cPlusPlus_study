/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

#include <iomanip>

using namespace std;

const int NUMROWS = 7;
const int NUMCOLS = 3;

int main()
{
    
	
	
	int rowNum, colNum;
	double sum=0;
	double ans;
	int count=0;

	
	double val[NUMROWS][NUMCOLS]={26, 32, 27,
	                          26, 32, 25,
	                          25, 32, 27,
	                          26, 32, 27,
	                          26, 30, 28,
	                          28, 31, 27,
	                          28, 31, 28};
	                          
	for(rowNum=0;rowNum<=NUMROWS;rowNum++){
		
		for(colNum=0; colNum<NUMCOLS; colNum++){
			
		if(colNum%3==0){
			
		ans=sum/3;
		
		if(ans!=0){
			
		cout<<"average temperature for day "<<rowNum<<" is "<<ans<<endl;	
		
			
		}
		
		
		sum=0;
			
		}
		

			
		sum=sum+val[rowNum][colNum];
	//	cout<<"Sum: "<<sum<<endl;
			
			
		}
		
	}
	    
    system("pause");

    return 0;
}

	





