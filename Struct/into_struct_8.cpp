#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct TeleType{
		
	string name;
	string phoneNo;
		
	};
	
	void populate(TeleType *);
	void dispOne(TeleType *);

int main()
{
	char key;
	TeleType *recPoint; // recpoint is a pointer to a structure of type TeleType
	
	cout << "Do you want to create a new record (respond y or n): ";
	key = cin.get();
	
	if(key =='y'){
		
	key = cin.get(); 
	recPoint = new TeleType;
	populate(recPoint);
	dispOne(recPoint);
		
	}
	
	else{
		
	cout << "\nNo record has been created.";
		
	}
	
    system("pause");
    return 0;
}

void populate(TeleType *record){
	
	cout<<"Enter a name: ";
	getline(cin, record->name);
	cout<<"Enter the phone number: ";
	getline(cin, record->phoneNo);
	
}

void dispOne(TeleType *contents){
	
	cout<< "\nThe contents of the record just created are:"
		<< "\nName: "<<contents->name
		<< "\nPhone Number: "<<contents->phoneNo<<endl;
		
	return;
	
}




