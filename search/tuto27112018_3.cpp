#include <iostream>

#include <iomanip>



using namespace std;

// binary search
// structured array

int main()
{
	
	int p[16]={2,3,4,7,11,13,17,19,23,29,31,37,41,43,47,53};
	
	int left, right, middle, count=0;
	
	bool b;
	
	int x = 14;
	
	left=0;
	
	right=15;
	
	middle=(left+right)/2;
	
	
	while(right-left!=1 && b==false){
		
	if(p[middle]==x){
		
		b=true;
		
	}else if(x>p[middle]){
		
	left=middle;
		
	}else{
		
		right=middle;
		
	}
		
	middle=(left+right)/2;
	count++;
		
	}
	
	cout<<b<<endl;
	
	cout<<"The count is "<<count<<endl;
	
	
	

	    
    system("pause");

    return 0;
}




