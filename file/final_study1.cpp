// reading a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  string line, name;
  int category, num;
  ifstream myfile ("a.txt");
  if (myfile.is_open())
  {
  	
  	getline(myfile, line);
  	
    while (getline(myfile, line) )
    {
    	
    	
      cout<<category<<name<<num<<endl;
    }
    myfile.close();
  }

  else cout << "Unable to open file"; 

  return 0;
}
