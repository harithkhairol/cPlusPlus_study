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
	
	
int rowNum, colNum;
	double sum=0;
	double ans;
	int count=0;
	

for(rowNum=0;rowNum<NUMROWS;rowNum++){
		
		for(colNum=0; colNum<NUMCOLS; colNum++){
			
			
			
		sum=sum+nums[rowNum][colNum];
			

		}
		
		ans=sum/3;
		
			
		cout<<"Average Temperature For Day "<<rowNum+1<<" is "<<ans<<endl;
		
		sum=0;
		
		
		
		
	}

    

}

	





