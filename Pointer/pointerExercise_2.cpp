#include <iostream>
#include <string>
using namespace std;




int main()
{
	
	char secretMsg[]="Why are pointers difficult?";
	
	char *pointerMsg; //declare pointer
	//pointerMsg = secretMsg; /* for string, only this declaration will store its base address */
	pointerMsg = secretMsg;

	
	
/*	for(int i=sizeof(secretMsg);i>0;i--){
		
	if(i%2!=0){
	
	cout<<secretMsg[i];	
	
	}
	
	
	
    }
    
    cout<<endl;
	
	*/
	
		while( *pointerMsg != '\0')
  	{
    	cout << *pointerMsg<<endl; 
    	
    	pointerMsg++;
    	
    	/*
    	
    	Since pointerMsg stores secretMsg[0], therefore the value of *pointerMsg equals the value of secretMsg[0].
    	So in while loop, the first character gets printed and pointerMsg++ increases the value of pointerMsg by 1.
    	So that now p+1 points to pointerMsg[1].
    	
    	This continues until the pointer reaches the end of the string i.e., before *p becomes equal to '\0'.
    	
    	'\0' is null. (termination of string after end of an array)
		
		
		*/
    	
        
  	}
	
//	for(pointerMsg = secretMsg; *pointerMsg;pointerMsg++){
//		
//		cout << *pointerMsg<<endl; 
//	}
	
	
	

  	
  	
  	
  	
  	

	
	  
    system("pause");
    
    return 0;
}







    










