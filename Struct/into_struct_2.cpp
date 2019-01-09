#include <iostream>
using namespace std;

struct Born{
		
	int month;
	int day;
	int year;
		
	};

int main()
{
	Born Birth;
	
	//Born Birth = { 04, 17, 1997}; /* Can also be declared like this */
	
	Birth.month=04;
	Birth.day=17;
	Birth.year=1997;
	
	cout<<Birth.day<<"/"<<Birth.month<<"/"<<Birth.year<<endl;
	



    system("pause");
    return 0;
}


