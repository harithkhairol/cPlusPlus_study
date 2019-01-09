#include <iostream>
using namespace std;

int main()
{
	
	struct{
		
	int month;
	int day;
	int year;
		
	}Birth;
	
	Birth.month=04;
	Birth.day=17;
	Birth.year=1997;
	
	cout<<Birth.day<<" "<<Birth.month<<" "<<Birth.year<<endl;
	



    system("pause");
    return 0;
}


