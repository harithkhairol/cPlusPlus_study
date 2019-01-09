#include <iostream>
#include<fstream>
#include <conio.h>
#include "latest.h" // for extern

using namespace std;


int main() {

int num, userInput, checkInput;
char accType;

int userChoice;
    
    cout<<"Bank Management System\n"<<endl;
    
    pressKey(); // display void function "Press any key to continue"
    
    getch(); //function pause till user press to continue
    
    do{
	    
    system("cls");
    
    cout<<"Menu\n"<<endl;
    
    cout<<"1) Create Account"<<endl;
    cout<<"2) Modify Account"<<endl;
    cout<<"3) Delete Account"<<endl;
    cout<<"4) View Account Balance"<<endl;
    cout<<"5) Deposit Money"<<endl;
    cout<<"6) Withdraw Money"<<endl;
    cout<<"7) View All Account"<<endl;
    cout<<"8) Exit\n"<<endl;
    
    cout<<"Enter 1 - 8 to continue.. : ";
    
    cin >> checkInput;
	
	userChoice=checkUserChoice(checkInput); // function to check if the cin is number or not

    system("cls");
    
	
    
    switch(userChoice){
    	
    case 1: 
    
    createAccount(); // create account function
    
    pressKeyMenu(); // display void function "Press any key to go back to menu"
    
    getch(); //function pause till user press to continue

    break;
    
    case 2: 
	
    cout<<"\nEnter Account No. To Modify Details: ";
    
    cin >> checkInput;
	
	userInput=checkAccountNo(checkInput); // function to check if the cin is number or not
    	
    updateData(userInput); // function to update the data
    
    pressKeyMenu(); // display void function "Press any key to go back to menu"
    
    getch(); //function pause till user press to continue
    	
    break;
    
    case 3:
    
    cout << "\nEnter Account No. To Delete: ";
	cin >> checkInput;
	
	userInput=checkAccountNo(checkInput); // function to check if the cin is number or not
	
	deleteAcc(userInput); // function to delete account
	
	pressKeyMenu(); // display void function "Press any key to go back to menu"
	
	getch(); // function pause till user press to continue
    
    break;
    
    case 4:
    	
    cout << "\nEnter Account No. To View Account Balance: ";
    cin >> checkInput;
	
	userInput=checkAccountNo(checkInput); // function to check if the cin is number or not
	
    searchAcc (userInput); // function to search account no to view account balance
    
    pressKeyMenu(); // display void function "Press any key to go back to menu"
    
    getch(); // function pause till user press to continue

    break;
    
    case 5:
    	
    cout<<"\nEnter Account No. To Deposit Money: ";
    
    cin >> checkInput;
	
	userInput=checkAccountNo(checkInput); // function to check if the cin is number or not
    	
    deposit(userInput); // function to deposit amount of money to account
    
    pressKeyMenu(); // display void function "Press any key to go back to menu"
    
    getch(); // function pause till user press to continue
    	
    break;
    
    case 6:
    	
    cout<<"\nEnter Account No. To Withdraw Money: ";
    
    cin >> checkInput;
	
	userInput=checkAccountNo(checkInput); // function to check if the cin is number or not
    	
    withdraw(userInput); // function to withdraw amount of money from account
    
    pressKeyMenu(); // display void function "Press any key to go back to menu"
    
    getch(); // function pause till user press to continue
    	
    break;  	
    
    case 7:
    	
    allAccount(); // function to display all account details
    
    pressKeyMenu(); // display void function "Press any key to go back to menu"
    
    getch(); // function pause till user press to continue
    	
    
    break;
    
    case 8:
    	
    system("cls");
    cout<<"Have a nice day!"<<endl;
    	
    
    break;
    
   default :

   cout<<"Error. Please enter only 1 - 8."<<endl; 
   getch();   	    

    
       }

    }while(userChoice!=8);
    



    
    system("pause");
    return 0;
} 



