//Name: Muhammad Harith Bin Khairolanuar
//Matric No: 1816349

#include <iostream>

using namespace std;

int main()
{
    double costOfOneRoomRent, numOfRoomsBooked, numOfDaysRoomBooked, salesTax, discount;
    double discountPercent, salesTaxPercent, discountPrice, totalRoomBookPrice;
    double totalDiscount, totalCost, totalBillAmount, salesTaxTotal;
    
    // start input
    
    cout<<"Enter the cost of renting one room:"<<endl;
    
    cin>>costOfOneRoomRent;
    
    cout<<"Enter the number of room booked:"<<endl;
    
    cin>>numOfRoomsBooked;
    
    cout<<"Enter the number of days the room are booked:"<<endl;
    
    cin>>numOfDaysRoomBooked;
    
    cout<<"Enter the sale's tax in percent(percent):"<<endl;
    
    cin>>salesTaxPercent;
    
    // end input
    
    
    // start discount
    
    if(numOfRoomsBooked >= 10 && numOfRoomsBooked<20){
        
        if(numOfDaysRoomBooked>=3){

        discount=0.15;
        
        }else{
          
        discount=0.10;
            
        }
        
        
    }
    
    else if(numOfRoomsBooked >= 20 && numOfRoomsBooked<30){
        
        if(numOfDaysRoomBooked>=3){

        discount=0.25;
        
        }else{
          
        discount=0.20;
            
        }
        
        
    }
    
    else if(numOfRoomsBooked >= 30){
        
        if(numOfDaysRoomBooked>=3){

        discount=0.35;
        
        }else{
          
        discount=0.30;
            
        }
        
        
    }
    
    else {
        
        discount=0;
        
    }
    
    // end discount
    
    
    
    // start operation
    
    discountPercent = discount * 100;
    
    totalDiscount = costOfOneRoomRent*discount;
    
    discountPrice= costOfOneRoomRent-totalDiscount;
    
    totalRoomBookPrice = discountPrice * numOfRoomsBooked;
    
    totalCost  = totalRoomBookPrice * numOfDaysRoomBooked;
    
    salesTax = salesTaxPercent/100;
    
    
    salesTaxTotal = salesTax * totalCost;
    
    
    totalBillAmount = totalCost + salesTaxTotal;
    
    // end operation
    
    
    // output
    
    cout<<"----------------------------------------------------------------"<<endl;
    
    cout<<"The cost of renting one room is: "<< costOfOneRoomRent <<endl;
    
    cout<<"The discount of each room as percent: "<< discountPercent <<"%"<<endl;
    
    cout<<"The number of rooms booked is: "<< numOfRoomsBooked <<endl;
    
    cout<<"The number of days the room are booked: "<< numOfDaysRoomBooked <<endl;
    
    cout<<"The total cost of the rooms: "<< totalCost <<endl;
    
    cout<<"The sales tax: "<< salesTaxPercent <<"%"<<endl;
    
    cout<<"The total billing amount is: "<< totalBillAmount <<endl;
    
    system("pause");
        
    return 0;
}

