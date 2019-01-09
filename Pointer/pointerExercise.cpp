#include <iostream>
#include <string>
using namespace std;




int main()
{
	
	char secretMsg[]="Why are pointers difficult?";


	
	
	for(int i=sizeof(secretMsg);i>0;i--){
		
	if(i%2!=0){
	
	cout<<secretMsg[i];	
	
	}
	
	
	
    }
    
    cout<<endl;
	
	
	  
    system("pause");
    
    return 0;
}







    










