#include <iostream>

using namespace std;



int main()
{
	
	int numgrades;
	
	// dynamic array allocation
	
	cout<<"Enter the number of grades to be processed"<<endl;
	
	cin>>numgrades;
	
	int *grades = new int(numgrades);
	
	for(int i=0;i<numgrades;i++){
		
	cout<<"Please Enter Grades "<<i<<" : ";
	cin >> *(grades+i);
	
	}
	
	for(int j=0;j<numgrades;j++){
		
	cout << *(grades+j) <<endl;
	
	}


	    
    system("pause");

    return 0;
}




