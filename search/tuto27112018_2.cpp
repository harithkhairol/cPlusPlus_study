#include <iostream>

#include <iomanip>



using namespace std;

//Linear Search
int main()
{
	
	int p[16]={2,3,4,7,11,13,17,19,23,29,31,37,41,43,47,53};
	
	int x = 14;
	
	bool answer=false;
	
	int i = 0 ;
	
	int count = 0;
	
	while(i<16 && answer == false){
		
	cout<<p[i]<<endl;
	
	if(p[i]==x){
	
	answer = true;	
	
	//break;
	
	}
	
	i++;
	count++;  

	}
	
	cout<<endl;
	
	if (answer==true){
	
	cout<<"True"<<endl;
		
	}
	
	else{
		
	cout<<"False"<<endl;
		
	}
	
	cout<<"Count is: "<<count<<endl;


	    
    system("pause");

    return 0;
}




