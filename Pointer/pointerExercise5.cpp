#include <iostream>
using namespace std;

int findMax(const int *vals, int numels);

int main()
{
	
	const int NUMPTS = 5;
	
	int nums[NUMPTS] = {2, 18, 1, 27, 16};
	
	cout << "\nThe maximum value is "<<findMax(nums, NUMPTS)<<endl;
	
	
    system("pause");
    return 0;
}

int findMax(const int *vals, int numels){
	
	int i, max = *vals;
	
	for(i=1; i<numels; ++i){
		
		if(max<*(vals+i)){
			max = *(vals+i);
		}
		
		
	}
	
	return max;
	

	
}
