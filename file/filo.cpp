 #include <iostream>
#include <string>
#include <fstream>

using namespace std;

//to read


int main(){
	
	
	
	ifstream theFile("a.txt"); // like cin << // read from file
	
	int category;
	string kulliyah;
	int num;
		
//	theFile.open("a.txt");
	

	while (theFile>>category>>kulliyah>>num)
    {
    	
    	cout<<category<<","<<kulliyah<<","<<num<<endl;
    	
    }

	system("pause");
	return 0;
	
}




