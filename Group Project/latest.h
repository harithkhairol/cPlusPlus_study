#include <iostream>
#include<fstream>
#include <conio.h>
#include <limits>

using namespace std;

/* start prototype */

int checkAccountNo(int); // prototype for function check if account no enter is number
double checkMoney(double, int); // prototype for function check if amount enter is number
int checkUserChoice(int); // prototype for function check if user choice is number

/* end prototype */

//initialize the file name
char nameFile[30] = "bank_sys1.dat";

/* start class */

class Bank {
	
	int account_no;
	char name[50];
	double deposit;
	char accType;
	
		public :
			
			// input to create account 
						
			void input_bank() {
				
				int checkInput;
				Bank bank;
				int find=0;
				ifstream f;
				
				

				//check if account number is already exist in file
				do{
					
				
					
				if(find==1){
				cout<<"This account number is already exist. Please choose another number"<<endl;
				}
				
			
			
				cout << "Enter account no : " << endl; 		
				cin >> checkInput;
				
				account_no=checkAccountNo(checkInput);
				
				f.open(nameFile, ios::binary);
			
				while (f.read((char*)&bank, sizeof(bank))) {
		
				if (bank.getaccount_no() == account_no) {
			
				find = 1;
				cout<<"Account no input id: "<<account_no<<endl;
				
				break;
				
				}
				
				else{
					find = 0;
					break;
				}
				
			
				
			 	}
			 	
			 	f.close();
				
			}while(find!=0);
				
				//
							
	           
				cout << " Enter Full Name : " << endl ; 
				cin.ignore();
				cin.getline(name,50);
				
				do{
				
				cout << " Enter account type ( current = C / saving = S ) : " << endl;
				cin >> accType;
				
				if(accType!='c' && accType!='s'){
					
				cout<<"Error. Please enter c or s only."<<endl;
					
				}
				
			
				
			    }while(accType!='c' && accType!='s');
				
				
				do{
					
				cout << " Enter deposit : " << endl ;
				cin >> deposit;
					
				if ( deposit >= 500) {
	            	cout << "Your account has been created successfully!" <<endl ;
                }
                	else {
                    	cout << " My apologies our bank minimum deposit requirement to create account is RM500  " << endl;
                    }

			}while(deposit < 500);
		}
		
		// input to update account 
		
		void update_bank() {
				
				int checkInput;
				Bank bank;
				int find=0;
				ifstream f;

				cout << " Enter Full Name : " << endl ; 
				cin.ignore();
				cin.getline(name,50);
				
				do{
				
				cout << " Enter account type ( current = C / saving = S ) : " << endl;
				cin >> accType;
				
				if(accType!='c' && accType!='s'){
					
				cout<<"Error. Please enter c or s only."<<endl;
					
				}
				
			
				
			    }while(accType!='c' && accType!='s');
				
				
				do{
					
				cout << " Enter deposit : " << endl ;
				cin >> deposit;
					
				if ( deposit >= 500) {
	            	cout << "Your account has been updated successfully!" <<endl ;
                }
                	else {
                    	cout << " My apologies our bank minimum deposit requirement to create account is RM500  " << endl;
                    }

			}while(deposit < 500);
		}
		
		
			//output for bank account	
			void output_bank() {
				
			cout << "Account no : " << account_no << endl; 
			cout << "Full Name : " << name << endl ; 
			cout << "Account type ( current = C / saving = S ) : " << accType << endl;
			cout << "Amount : " << deposit << endl<< endl; 

            }

			// function to return account no
			int getaccount_no(){
				
				return account_no;
				
			}
			
			// function to deposit money
			double addDeposit(double x){
			deposit+=x;
		}
		
		// function to withdraw money
		double addWithdraw(double x){
			deposit-=x;
		}
	

};

/* end class */


/* start function */

//function to check if account no enter is number
int checkAccountNo(int num){
	
	bool Fail1;
	
	if(cin.fail()){  // return true when fail occur
		
	Fail1=true;
	cin.clear(); // clears error flag in cin
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); //skip to newline to ignore anything else on the same line as the non-number to avoid failure
	}
	
	else{
	Fail1=false;	
	}
				
	while(Fail1 ==true){
		
	cout << "Error. Please enter number only.." << endl; 	
						
	cout << "Enter Account No : " << endl; 		
	cin >> num;
				
	Fail1 = cin.fail(); // return true when fail occur
			
	cin.clear(); // clears error flag in cin
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); //skip to newline
				
				
				
	};
	
	return num;
}


// function to check if user choice is number
int checkUserChoice(int num){
	
	bool Fail1;
	
	if(cin.fail()){ // return true when fail occur
		
	Fail1=true;
	cin.clear(); // clears error flag in cin
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); //skip to newline
	}
	
	else{
	Fail1=false;	
	}
				
	while(Fail1 ==true){
		
	system("cls");
	
	cout << "Error. Please enter number only.." << endl; 
    
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
	cin >> num;
				
	Fail1 = cin.fail(); // return true when fail occur
			
	cin.clear(); // clears error flag in cin
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); //skip to newline
				
				
				
	};
	
	return num;
	
}

//function to check if amount enter is number
double checkMoney(double num, int type){
	
	bool Fail1;
	
	if(cin.fail()){ // return true when fail occur
		
	Fail1=true;
	cin.clear(); // clears error flag in cin
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); //skip to newline
	}
	
	else{
	Fail1=false;	
	}
				
	while(Fail1 ==true || num<1){
	
	if(Fail1 ==true){
	
	cout << "Error. Please enter number only.." << endl; 	
	
    }
    
	if(type==1){ //for deposit
	
	if(num<1){
	cout<<"Please enter number more than 1"<<endl;
	}
		
	cout<<"\nEnter Amount To Deposit Money: ";
			
    }else if(type==2){ //for withdraw
    
    if(num<1){
	cout<<"Please enter number more than 1"<<endl;
	}
    	
	cout<<"\nEnter Amount To Withdraw Money: ";
    }	
		
	cin >> num;
				
	Fail1 = cin.fail(); // return true when fail occur
			
	cin.clear(); // clears error flag in cin
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); //skip to newline
				
				
				
	};
	
	return num;
}

//display "Press any key to continue... \n" function
void pressKey(){
	cout<<"Press any key to continue... \n"<<endl;
}

//display "Press any key to go back to menu... \n" function
void pressKeyMenu(){
	cout<<"Press any key to go back to menu... \n"<<endl;
}




// function to write account into the file
void createAccount(){
	Bank bank;
	bank.input_bank();
	
	//save object to file
	ofstream f;
	f.open(nameFile, ios::binary|ios::app);
	f.write((char*) &bank, sizeof(bank));
	f.close(); 
	
	
	
}

// function to display all account
void allAccount(){
	
	Bank bank;
	ifstream f;
	f.open(nameFile, ios::binary);
	
	while(f.read((char *)&bank, sizeof(bank))){
		
		bank.output_bank();
		
	}
	
	f.close();
	
}

//function to modify the account
void updateData(int account_nofind) {
	Bank akaun;
	fstream f;
	f.open(nameFile, ios::in | ios::out) ;
	
	while  ( f.read ((char*)&akaun, sizeof(akaun))) {
		if (akaun.getaccount_no() == account_nofind) {
			akaun.output_bank();
			
			cout << "Update your account data" << endl;
			akaun.update_bank();
			
			int pos = -1*sizeof(akaun);
			f.seekp (pos, ios::cur);
			f.write ((char*)&akaun, sizeof(akaun));
			
		
			
			break;
			
		}
	}
	f.close();
}

//function to deposit money to account
void deposit(int account_no)
{
	
	Bank bank;
	
	double checkInput, amount;
	
	fstream f; // for read/write
	f.open(nameFile, ios::in|ios::out);
	while(f.read((char*) &bank, sizeof(bank))){
		
		if(bank.getaccount_no()==account_no){
			
			//show data
			bank.output_bank();
			
			//input modify data
			cout << "Please enter amount to deposit:"<<endl;
			
			cin>>checkInput;
			
			amount=checkMoney(checkInput, 1); // function to check if input is number
			
			bank.addDeposit(amount); // function add deposit
			
			
			int pos = -1 * sizeof(bank);
			f.seekp(pos, ios::cur);
			f.write((char*) &bank, sizeof(bank));
			
			cout << "Amount has deposit successfully!:"<<endl;
			
			break;
		}
		
	}
	
	f.close();

}

// function to withdraw money to account
void withdraw(int account_no)
{
	
	Bank bank;
	
	double checkInput, amount;
	
	fstream f; // for read/write
	f.open(nameFile, ios::in|ios::out);
	while(f.read((char*) &bank, sizeof(bank))){
		
		if(bank.getaccount_no()==account_no){
			
			//show data
			bank.output_bank();
			
			//input modify data
			cout << "Please enter amount to withdraw:"<<endl;
			
			cin>>checkInput;
			
			amount=checkMoney(checkInput, 2); // function to check if input is number
			
			bank.addWithdraw(amount); // function to withdraw amount from account
			
			
			int pos = -1 * sizeof(bank);
			f.seekp(pos, ios::cur);
			f.write((char*) &bank, sizeof(bank));
			
			cout << "Amount has withdraw successfully!:"<<endl;
			
			break;
		}
		
	}
	
	f.close();

}

// function to delete account
void deleteAcc(int accNo)
{
	Bank bank;
	
	ifstream fi;
	fi.open(nameFile, ios::binary);
	
	ofstream fo;
	fo.open("tmp.dat", ios::out|ios::binary); // create temporary file
	
	int find = 0;
	
	while (fi.read((char*)&bank, sizeof(bank)))
	{
		if(bank.getaccount_no() != accNo)
		{
			fo.write((char*)&bank, sizeof(bank)); // write all of the original file to temporary file except for the account no. that user input to delete it.
		}
		
		else
		{
			find = 1;
		}
	}
	
	fi.close();
	fo.close();
	
	remove(nameFile); // delete original file
	rename("tmp.dat", nameFile); //rename temporary file to original file name
	
	if (find == 1)
	{
		cout << "Account No. " << accNo << " Have Been Deleted!\n";
	}
	
	else
	{
		cout << "Account No. " << accNo <<" Cannot Be Found! \n";
	}
}

//function to search account
void searchAcc (int accNo) {
	
	Bank bank, accFound;
	int find = 0;
	ifstream f;
	f.open(nameFile, ios::binary);
	while (f.read((char*)&bank, sizeof(bank))) {
		
		if (bank.getaccount_no() == accNo) {
			
			accFound = bank;
			find = 1;
			
			break;
		}
	}
	
	if (find == 0) {
		
		cout << "\nAccout No. " << accNo << " Cannot Be Found\n";
	}
	
	else {
		
		cout << "Account No. You Type " << accNo << " Have Been Found\n";
		accFound.output_bank();
	}
	
	f.close();
}

/* end function */



