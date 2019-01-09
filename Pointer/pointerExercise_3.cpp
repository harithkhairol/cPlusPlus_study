#include <iostream>
#include <string>
using namespace std;




int main()
{
	
	char secretMsg[]="Why are pointers difficult?";
	
	char *pointerMsg; //declare pointer
	//pointerMsg = secretMsg; /* for string, only this declaration will store its base address */
	pointerMsg = secretMsg;
	int size=sizeof(secretMsg)-2;
	
	pointerMsg=pointerMsg+size;
	
	
	for (int i=0;i<=size;i++){
	
	if(i%2!=0){
	cout<<*pointerMsg;
	}
	
	pointerMsg--;
	
    /*
    	Since pointerMsg stores secretMsg[0], therefore the value of *pointerMsg equals the value of secretMsg[0].
    	So in while loop, the first character gets printed and pointerMsg++ increases the value of pointerMsg by 1.
    	So that now pointerMsg+1 points to pointerMsg[1].
    	
    	This continues until the pointer reaches the end of the string i.e., before *p becomes equal to '\0'.
    	
    	'\0' is null. (termination of string after end of an array)
    	
    	n C++, each string is terminated with the character '\0', which is practically 0. 
		So, when the for loop reaches the end of string, *p evaluates to '\0', 
		which is 0, which evaluates to false, which terminates the for loop.
		
		*/		
	}
	
	cout<<endl;
	 
	

    	
		
    	
        

  	

	
	  
    system("pause");
    
    return 0;
}







    










