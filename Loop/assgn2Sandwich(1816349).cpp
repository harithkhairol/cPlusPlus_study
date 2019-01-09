//NAME: MUHAMAD HARITH BIN KHAIROLANUAR
//MATRIC NO: 1816349

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	
	string size, flavour, sizeAns, flavourAns, sideOrder, moreOrder, sideFood, sideDrink;;
	double price,sideFoodPrice,sideDrinkPrice;
	double orderAmount;
	double tax=0.06;
	double taxAmount, totalAmount;
	
	cout<<"      ** WELCOME TO SANDWICH STALL **"<<endl<<endl;
    
    do{
    	
    // Start Choose Size
    
     
    do{
    	
    cout <<"Two sandwich sizes:"<<endl;
    cout <<"      1) Regular (RM12.00) and 2) Large (RM18.50)"<<endl;
    cout <<"\nChoose the size: ";
    
    cin>>size;
    
    if(size=="R" || size=="r"){
    	
    price = 12.00;	
    
    sizeAns="Regular size";
    
    break;
    
  	
	}
	else if(size=="L" || size=="l"){
		
	price = 18.50;	
	
	sizeAns="Large size";
	
	break;
	
	}
	
	else{
		
	cout<<"Error. Please Enter R for Regular or L for Large"<<endl;
	}
	
}while(1);

// End Choose Size
	
		
	// Start Choose Types
	
	
	
	do{
		
	cout <<"\nSandwich types:"<<endl;
	cout <<"      1) Beef pepperoni sandwich 2) Tuna sandwich 3) Chicken sandwich"<<endl;
	cout <<"\nChoose the flavour: ";
	
	
	cin>>flavour;
	
	if(flavour=="B" || flavour=="b"){
    	
    flavourAns="Beef pepperoni sandwich";
    
    break;
  	
	}
	
	else if(flavour=="T" || flavour=="t"){
		
	flavourAns="Tuna Sandwich";
	
	break;
	
	}
	
	else if(flavour=="C" || flavour=="c"){
		
	flavourAns="Chicken Sandwich";
	
	break;
	
	}
	
	else{
		
	cout <<"Error. Please choose B for Beef Pepperoni Sandwich, T for Tuna Sandwich, and C for Chicken Sandwich:"<<endl;
	}
	
	}while(1);
	
	// End Choose Types
	
	
	cout<<"\nYou have ordered "<<sizeAns<<" "<<flavourAns<<endl;
	
	// Start Side Order
	
	cout<<"\nDo you want to add any side order for RM2.00 (Y for yes)? ";
	
	cin>>sideOrder;
	
	if(sideOrder=="Y" || sideOrder=="y"){
		
	
	
	cout<<"\nSide order:"<<endl;
	cout<<"\t  1- Fries"<<endl;
	cout<<"\t  2- Onion ring"<<endl;		
	cout<<"\t  3- Cole slaw"<<endl;
	cout<<endl<<"       Choose side order: ";
	
	cin>>sideFood;
	
	if(sideFood=="1"){
		
	sideFoodPrice=2.00;
	
	}
	else if(sideFood=="2"){
		
	sideFoodPrice=2.00;
	
	}
	else if(sideFood=="3"){
		
	sideFoodPrice=2.00;
	
	}
	
	else{
	
	sideFoodPrice=0;
	
	}
	
	
	
	
	}else{
		
		sideFoodPrice=0;
				
	}


	
	// End Side Order
	
	
	do{
	
	
	cout<<"\nYou may choose drinks:"<<endl;
	cout<<"    1- Hot Tea (RM1.50)"<<endl;
	cout<<"    2- Lemon Juice (RM1.20)"<<endl;		
	cout<<"\nChoose your drink: ";
	
	cin>>sideDrink;
	
	if(sideDrink=="1"){
		
	sideDrinkPrice=1.50;
	cout<<"You have chosen Hot Tea."<<endl;
	break;
		
	
	}else if(sideDrink=="2"){
		
	sideDrinkPrice=1.20;
	cout<<"You have chosen Lemon Juice."<<endl;
	break;
	
	}else{
		
	cout<<"Error. Please Enter 1 for Hot Tea or 2 for Lemon Juice:"<<endl;
	
	}
	
	}while(1);
		
		
	orderAmount=price+sideFoodPrice+sideDrinkPrice;
	
	cout<<"\nOrder amount is RM "<<fixed<<setprecision(2)<<orderAmount<<endl;
	
	taxAmount=orderAmount*tax;
	
	cout<<"TAX amount is RM "<<fixed<<setprecision(2)<< taxAmount <<endl;
	
	totalAmount=orderAmount+taxAmount;
	
	cout<<"Total amount is RM "<<fixed<<setprecision(2)<< totalAmount <<endl;
	 	
	cout<<"\nMore order? ";
	
	cin>>moreOrder;
	
	if(moreOrder=="N" || moreOrder=="n"){
		
	cout<<"\nHAVE A NICE DAY!!!"<<endl;
		
	break;
	
	}
	
	
    	
	}while(1);



 
    system("pause");
    return 0;
}
