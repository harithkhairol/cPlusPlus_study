#include <iostream>
using namespace std;

int main()
{   
    int numgrades;

    //dynamic array allocation
    cout << "Enter the number of grades to be processed: ";
    cin >> numgrades;
    int *grades;
	grades = new int[numgrades];

    for (int i = 0; i < numgrades; i++)
    {
       cout << "Please enter grade " << i  << " ";  
       cin >> *(grades + i);       
    }

    for (int j = 0; j < numgrades; j++)
    {
       cout << *(grades + j) << endl;       
    }    
    return 0;
}

