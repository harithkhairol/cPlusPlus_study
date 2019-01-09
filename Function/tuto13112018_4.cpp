#include <iostream>
#include <cstdlib>
using namespace std;

void inverse(int[10]);


int main()
{

	int nums[10]={-9, 3, -5, 6, 0, -13, 15, -2, 1, -8};
	
	inverse(nums);
	
	for(int i=0;i<10;i++){
		
	cout<<nums[i]<<endl;
	
	}
	
	
	
 
    system("pause");
    
    return 0;
}

void inverse(int nums[10]){
	
	
for(int i=0;i<10;i++){
		
	nums[i]=-nums[i];
	

	
	}

    

}







    










