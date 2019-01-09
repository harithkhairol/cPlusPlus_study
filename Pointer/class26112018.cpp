#include <iostream>

#include <iomanip>

const int SIZE=26;

using namespace std;


int main()
{
	
	char arrayWord[]="Why are pointers difficult?";
	
	char *secretWord;
	secretWord = arrayWord;
	
	secretWord=secretWord+SIZE;
	
	for(int index = 0; index<=SIZE; index++){
		
	
	if(index%2!=0){
	cout<<*secretWord;
	}
	
	
	secretWord=secretWord-1;
	
	}
	
	cout<<endl;
	    
    system("pause");

    return 0;
}




