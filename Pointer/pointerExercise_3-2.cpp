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
	
	
	
	for (int i=0;i<=size;i++){
	
	if(i%2!=0){
	cout<<*(pointerMsg+size-i);
    }
	
	
	}
	
	cout<<endl;
	 
	

    	
		
    	
        

  	

	
	  
    system("pause");
    
    return 0;
}







    










