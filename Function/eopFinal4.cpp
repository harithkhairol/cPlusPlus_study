#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
const int SIZE= 5;
void guess(int [] , string [], int);

int main (){

int val[SIZE] = {2 , 5 , 6, 3, 8};

string ctry[SIZE] = {"Egypt" , "Uruguay", "Japan" , "Peru", "Holland"};
guess(val , ctry, SIZE);

system("pause");
return 0; 

}
 
 
void guess(int values [], string ctry[], int SIZE)
{
for (int i= 0; i < SIZE; i++){

cout << setw(8) << *( ctry + i) << " ";
for (int j = 0 ; j <*(values+ i); j++)
{
cout << "*";

}
cout << endl ; 

}

}


