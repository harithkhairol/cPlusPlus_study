#include <iostream>

#include <iomanip>



using namespace std;


int main()
{
	
	int p[16]={2,3,4,7,11,13,17,19,23,29,31,37,41,43,47,53};
	
	int x = 14;
	
	bool answer=false;
	
	for(int i = 0; i<16; i++){
		
	cout<<p[i]<<endl;
	
	if(p[i]==x){
	
	answer = true;	
	
	break;
	
	}  

	}
	
	cout<<endl;
	
	if (answer==true){
	
	cout<<"True"<<endl;
		
	}
	
	else{
		
	cout<<"False"<<endl;
		
	}
	


	    
    system("pause");

    return 0;
}




