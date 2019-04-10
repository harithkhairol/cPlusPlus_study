#include <iostream>
using namespace std;

int main()
{
     int n = 8;
     int i;
     int first =0; // use for comparison for first element of array with other array
     int a[n]={2,2,2,2,2,2,1,2}; //fake coin
          
      for(i=0;i<n-1;i++){     
   
         if(a[first]>a[i+1]){  // compare first coin with other coin
            cout<<"a["<<i+1<<"] is the fake coin"<<endl;
          }
         
         else if(a[first]<a[i+1]){
             
            cout<<"a["<<i<<"] is the fake coin"<<endl;
            first++; // change coin compare to the next element array because the firstt is  fake 
             
                 }  
           }
    
        return 0;
}
