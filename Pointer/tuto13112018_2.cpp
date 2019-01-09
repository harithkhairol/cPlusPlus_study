#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{

	char letter[25];
	int count = 0;
	

	
	for(int i=0; i<25 ; i++){
	
	letter[i]= rand()%15+67;
	
	/* rand()%15 //range  */ /* +67 //starting number */
	 
	}
	
	for(int i=0; i<25 ; i++){
	
	cout<<letter[i]<<endl;
	
	if(letter[i]==68){
	count++;
	}
		
	
	}
	
	cout <<"The count is: " <<count<<endl;
	
	
	
 
    system("pause");
    
    return 0;
}



    










