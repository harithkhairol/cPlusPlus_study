#include <iostream>
#include <stdlib.h>
using namespace std;
const int s=10;

void inverse(int[s]);


int main()
{
	int result;
	int num[s]={1,3,5,7,9,11,13,15,17,19};
	
	inverse(num);




for(int i=0;i<s;i++){

	cout<<num[i]<<endl;
}
	
 
    system("pause");
    
    return 0;
}


void inverse(int nums[s]){
	
int x;

	
for(int i=0;i<s/2;i++){

	x=nums[i];
	
	nums[i]=nums[s-1-i];
	
	nums[s-1-i]=x;
	
	
}

    

}








