#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//to read

int main(){
	
	ofstream theFile("players.txt");
	
	cout<<"Enter Players ID, Name, and Money"<<endl;
	cout<<"press ctrl+z to quit\n"<<endl;
	
	int idNumber;
	string name;
	double money;
	
	while(cin>>idNumber>>name>>money){
		
		theFile<<idNumber<<" "<<name<<" "<<money<<endl;
		
	
	}
	
	
	
	
	

	system("pause");
	return 0;
	
}


