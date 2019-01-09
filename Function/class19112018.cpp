#include <iostream>
#include <cstdlib>
using namespace std;

const int SIZE=7;

void bubblesort(int[SIZE]);


int main()
{

	int unsortedlist[SIZE]={5, 3, 6, 10, 9, 13, 11};
	
	cout<<"Start value"<<endl;
	
	for(int i=0;i<SIZE;i++){
	
	cout<<unsortedlist[i]<<endl;
		
	}
	
	bubblesort(unsortedlist);
 
    system("pause");
    
    return 0;
}

void bubblesort(int unsortedlist[SIZE]){
	
	int temp =0;
	
for(int i=0;i<SIZE;i++){
	
	if(unsortedlist[i] > unsortedlist[i+1]){
		
		temp = unsortedlist[i];
		unsortedlist[i] = unsortedlist[i+1];
		unsortedlist[i+1] = temp;
		
	}

	
	}
	
	cout<<"\nAfter value"<<endl;
	
	for(int i=0;i<SIZE;i++){
	
	cout<<unsortedlist[i]<<endl;
	
	}
	
	
	
	

    

}







    










