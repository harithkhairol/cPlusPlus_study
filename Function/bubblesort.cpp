#include <iostream>
#include <cstdlib>
using namespace std;

const int SIZE=7;

void bubblesort(int[SIZE]);


int main()
{

	int unsortedlist[SIZE]={25, 7, 3, 2, 9};
	
	cout<<"Start value"<<endl;
	
	for(int i=0;i<SIZE;i++){
	
	cout<<unsortedlist[i]<<endl;
		
	}
	
	bubblesort(unsortedlist);
 
    system("pause");
    
    return 0;
}

void bubblesort(int unsortedlist[SIZE]){
	
	int temp;
	
for(int i=0;i<SIZE;i++){
	
	 for(int j=0;j<=SIZE;j++)
 {
	
	if(unsortedlist[j] > unsortedlist[j+1]){
		
		temp = unsortedlist[j];
		unsortedlist[j] = unsortedlist[j+1];
		unsortedlist[j+1] = temp;
		
	}


	
	}
		
}

	cout<<"\nAfter value"<<endl;



	for(int i=0;i<SIZE;i++){
	
	cout<<unsortedlist[i]<<endl;
	
	}}







    










