#include <iostream>
using namespace std;

int main()
{   
	
	int *numAddr; // declare a pointer to an int
	int miles, dist;
	
	dist = 158; 
	miles = 22;
	
	numAddr = &miles; // store the "address of miles" in numAddr
	
	cout << "The address stored in numAddr is " << numAddr <<endl; //READ ADDRESS (PRINT OUT 0x70fe34)
	cout << "The value pointed to by numAddr is " << *numAddr <<endl<<endl; //READ VALUE (PRINT OUT 22)
	
	numAddr = &dist; // store the "address of dist" in numAddr
	
	cout << "The address stored in numAddr is " << numAddr <<endl;
	cout << "The value pointed to by numAddr is " << *numAddr <<endl<<endl;
	
	
	system("pause");
	
	

    return 0;
}

