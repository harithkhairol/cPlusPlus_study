#include <iostream>
using namespace std;

int surprise(int );

int main (){

cout<<"baby"<<endl;
int s = 4;
cout << "\nSurprise for " << s <<" = "<<surprise(s) <<endl;

system("pause");
return 0;


}
int surprise(int n){

cout << n;
if (n > 1) {
cout << " x" ;
return n * surprise(n-1);}
else {
return 1; 
}

}
