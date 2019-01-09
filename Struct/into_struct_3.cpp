#include <iostream>
#include <string>
using namespace std;

struct PayRecord{
		
	int id;
	string name;
	double rate;
		
	};

int main()
{
	
	const int NUM = 5;
	PayRecord Employee[NUM]={{1, "Jihyo", 90.99},
							 {2, "IU", 99.77},
							 {3, "Nayeon", 88.99},
							 {4, "Cat", 70.88},
							 {5, "Dog", 60.94}};
	
	
	for(int i=0;i<NUM;i++){
		
		cout<<Employee[i].id<<" "<<Employee[i].name<<" "<<Employee[i].rate<<endl;
		
	}
	

	

	



    system("pause");
    return 0;
}


