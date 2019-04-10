#include<iostream>
using namespace std;
 
int sum(int arr[], int i, int n);
bool fake(int arr[], int i, int n);
 
int main ()
{
    int n = 8; //total
    int i=0;
    int arr[]={2,2,2,2,2,2,1,2};
    bool ans=fake(arr, i, n); // initialize ans to function that find fake coin
 
	if(ans){
		cout<<"There is fake coin"<<endl;
	}else{
		cout<<"There is no fake coin"<<endl;
	}

    return 0;
}
 
// function to find sum of array
int sum(int arr[], int i, int n){
	int total=0; 
	for(i;i<n;i++){
		total=total+arr[i];
	}
	return total;
}
 // function to find fake coin
// dividing to two parts until there is two coin than compare the two coin 
bool fake(int arr[], int i, int n){ 
 
	int j=0;
	int arr2[n];
	int i2=n/2;
 
if(n==2){ // if total of coin is 2, then compare which is smaller
 
         if(arr[j]>arr[j+1]){  
            return true;
          }
 
          else if( arr[j]<arr[j+1]){
          	return true;
          }
 
	else{
          	return false;
          }  
 
  
}else if( sum(arr, i, n/2) > sum(arr, n/2, n)){ //if 1st half of array is larger than 2nd half 
 
	for(int k=0;k<n/2;k++){
 
		arr2[k]=(arr[i2+1+k]);  // add 2nd half array to new array
 
	}
 
	fake(arr2, j, n); // recursive function to further divide the array
 } else if( sum(arr, i, n/2) < sum(arr, n/2, n)){ //if 1st half of array is smaller than 2nd half 
 
     	for(int k=0;k<n/2;k++){
 
	arr2[k]=(arr[i+k]); // add 1st half array to new array
 
	}
 
 
	fake(arr2, j, n/2); // recursive function to further divide the array
 
}
 
 else{
 
     	return false; //no fake coin afte compare two half
 
     }
 
}
