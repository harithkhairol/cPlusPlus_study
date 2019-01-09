#include <iostream>
using namespace std;
int main()
{
    double total = 20.5;  //declare and initialize total
    double &sum = total;  // declare another name for total
    
    cout << "sum = " << sum << endl; // displays address of total
    sum = 18.6; //changes the value of total
    cout << "total = " << total << endl; //display 18.6
    return 0;
}

