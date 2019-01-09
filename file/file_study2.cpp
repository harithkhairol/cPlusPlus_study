#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//to read

int main(){
	
	ifstream theFile("players.txt");
	
	int idNumber;
	string name;
	double money;
	
	while(theFile>>idNumber>>name>>money){
		
		cout<<idNumber<<" "<<name<<" "<<money<<endl;
		
	
	}
	
	
	
	
	

	system("pause");
	return 0;
	
}


