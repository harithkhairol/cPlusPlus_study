#include <iostream>

using namespace std;

int findMax(int[], int);

int main()
{

	const int NUMPTS = 5;
	
	int nums[NUMPTS] = {2, 18, 1, 27, 16};
	
	cout<<"The maximum value is "<<findMax(nums, NUMPTS)<<endl;
	
    system("pause");

    return 0;
}


int findMax(int vals[], int numels){
	
	int i, max = vals[0];
	
	for(i=1;i<numels;i++){
	
		if (max<vals[i]){
			max=vals[i];
		}
		
	}
		
		return max;
	
	
}

