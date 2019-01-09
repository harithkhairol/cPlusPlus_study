#include <iostream>
#include <string>
using namespace std;




int main()
{
	
	char secretMsg[]="Why are pointers difficult?";
	
	char *pointerMsg; //declare pointer
	//pointerMsg = secretMsg; /* for string, only this declaration will store its base address */
	pointerMsg = secretMsg;

	int i=0;
	
	
		while( *pointerMsg != '\0')
  	{
    	cout << *(pointerMsg+i)<<endl; 
    	
    	i++;
    	
  	}

  	
  	
  	
  	
  	

	
	  
    system("pause");
    
    return 0;
}







    










