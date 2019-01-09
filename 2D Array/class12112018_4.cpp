#include <iostream>

#include <iomanip>

using namespace std;

const int NUMROWS = 7;
const int NUMCOLS = 3;

void average(double[NUMROWS][NUMCOLS]);

int main()
{

	
	double val[NUMROWS][NUMCOLS]={{26, 32, 27},
	                          {26, 32, 25},
	                          {25, 32, 27},
	                          {26, 32, 27},
	                          {26, 30, 28},
	                          {28, 31, 27},
	                          {28, 31, 28}};
	                          
	
	                          
	average(val);
	    
    system("pause");

    return 0;
}

void average(double nums[NUMROWS][NUMCOLS]){
	

	
	

for(int i=0;i<NUMROWS;i++){
	
	float average=0;
		
		for(int j=0; j<NUMCOLS; j++)
			
		
		average+= (nums[NUMROWS][NUMCOLS])/NUMCOLS;
		cout<< "Average of day "<<i+1<<" is "<<average<<endl;
		
		
	}

    

}

	





