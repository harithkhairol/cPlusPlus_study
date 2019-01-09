#include <iostream>

#include <iomanip>



using namespace std;

const int NUMROWS = 7;
const int NUMCOLS = 3;


int main()
{
	
	int d2[4][3]={{16, 15, 14},
	              {13, 12, 11},
	              {3, 7, 6},
	              {4, 5, 3}};


for(int rowNum=0;rowNum<4;rowNum++){
		
		for(int colNum=0; colNum<3; colNum++){
			
		cout<<d2[rowNum][colNum]<<" ";
			
			
			
			

		}
		
		cout<<endl;
		
		
		
	}

	    
    system("pause");

    return 0;
}




