#include <iostream>
#include <string>
#include <iomanip>



using namespace std;



int main()
{
	
	string head[6]={"Club", "Won", "Drawn", "Lost", "MP", "Points" };
	
	string team[8]= {"Man City", "Liverpool", "Chelsea", "Tottenham", "Arsenal", "Bournemouth", "Watford", "Man United" };
	
	int result[8][5];
	
	double mp=0, points=0;
	
	
	for(int rowNum=0;rowNum<8;rowNum++){
		
		cout<<"Row "<<rowNum+1<<endl;
		
		for(int colNum=0; colNum<3; colNum++){
			
		cout<<"Enter Number "<<colNum+1<<endl;
			
		cin>> result[rowNum][colNum];

		}
		
		
		
		
	}
	
	for(int rowNum=0;rowNum<8;rowNum++){
		
		
		result[rowNum][3]=result[rowNum][0]+result[rowNum][1]+result[rowNum][2];
		
		result[rowNum][4]=result[rowNum][0]*3+result[rowNum][1];
		
		
		
	}
	
	for(int colNum=0; colNum<6; colNum++){
			
		cout<< left << setw(10)<<head[colNum];
			
		}
		
		cout<<endl;
	
	
	for(int rowNum=0;rowNum<8;rowNum++){
		
		cout<< left << setw(10) <<team[rowNum];
		
		
		for(int colNum=0; colNum<5; colNum++){
			
		cout<<left << setw(10)<<result[rowNum][colNum]<<" ";
			
		}
		
		cout<<endl;
		
		
		
	}
	
	

	    
    system("pause");

    return 0;
}




