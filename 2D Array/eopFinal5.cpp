#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int R = 3 ;
const int C = 4;
void myArray (int [][C]);

int main ()
{
int seats [][C] = {{1,2,3,4},
					{5,6,7,8},
					{9,10,11,12}};

myArray(seats);
return 0; 

}

void myArray (int spaces[][4]){
	
	for(int i=0; i<R;i++){
		
		for(int j=0;j<C;j++){
			if(spaces[i][j]%3==0)
				spaces[i][j] = 0;
			cout << spaces[i][j]<< " ";
		}
		cout<<endl;
		
	}
	
}



