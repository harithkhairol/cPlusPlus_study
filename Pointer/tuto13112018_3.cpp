#include <iostream>
#include <cstdlib>
using namespace std;

int search(char[25], char );


int main()
{

	char letter[25];
	int count = 0;
	
	char l;
	
	cout<<"Enter letter: ";
	
	cin>>l;
	
	
	for(int i=0; i<25 ; i++){
	
	letter[i]= rand()%15+67;
	
	/* rand()%15 //range  */ /* +67 //starting number */
	 
	}
	
	
	
	
	
	
	
	cout <<"The count is: " <<search(letter, l)<<endl;
	
	
	
 
    system("pause");
    
    return 0;
}


int search(char letters[25], char p){

int count =0;

	
for(int i=0; i<25 ; i++){
	
	cout<<letters[i]<<endl;
	
	if(letters[i]==p){
	count++;
	}
		
	}
	
	return count;

    

}




    










