 #include <iostream>
#include <string>
#include <math.h>
#include <fstream>
#include <cstdlib> 
#include <ctime>

using namespace std;

//to read

int arrSize=0;


void stat_arr(float arr[], float *min, float *max, float *avg);

int main(){
	
	srand(time(NULL)); 
	
	for(int i=0;i<10;i++){
	
	cout << (rand() %250) + 100<<endl;

}
/*
	int NumOne[5], NumTwo[5];
	NumTwo[5] = 21;
	
	cout<<NumTwo[0]<<endl;
	cout<<NumTwo[1]<<endl;
	
	*/

	//char *str = "Hello World";
	
	//char str[11] =  "Hello World";
	//char str[] =  {'H', 'e', 'l','l','o','\0'};
	
	
	/*
	
	int x =7;
	int* pointer1 = &x;
	int* pointer2 = pointer1;
	
	cout<<pointer1<<endl;
	cout<<pointer2<<endl;
	
	cout<<&pointer1<<endl;
	cout<<&pointer2<<endl;
	
	cout<<*pointer1<<endl;
	cout<<*pointer2<<endl;
	
	
	int x = 100;
	int y = 200;
	int* ptrnum = &x;
	y = sqrt(x) * y;
	*ptrnum = pow(sqrt(x), 3);
	x *=4;
	
	cout<<y<<" "<<x<<endl;
	cout<<*ptrnum<<endl;


	int b[5], *bPtr;
	
	*bPtr = &b;
	
	
	
	int i=0;
	float arr[i];
	float min;
	float max;
	float avg;
	
	while(i<10){
		
	cout<<"Enter price of product : ";
	cin>>arr[i];
	
	if(arr[i]==-1){
		break;
	}
	
	i++;
	
	}
	
	cout<<"The enter value is :"<<endl;
	cout<<endl;
	
	for(int j=0;j<i;j++){
	
	
	cout<<j+1<<" is "<<arr[j]<<endl;	
		
	}

	cout<<endl;
	
	arrSize=i;
	
	stat_arr(arr, &min,  &max,  &avg);
	
	cout<<"Min is "<<min<<endl;
	cout<<"Max is "<<max<<endl;
	cout<<"Avg is "<<avg<<endl;
	
	*/
	
	

	system("pause");
	return 0;
	
}

void stat_arr(float arr[], float *min, float *max, float *avg){
	

	
	int i=1, j=1;
	float sumOfArray=0;
	
	// start min
		
	*min=arr[0];
	
	while(i<arrSize){
	
		
		if(arr[i]<*min){
			
		*min=arr[i];
			
		}
		
		i++;
	}
	
	// end min
	
	// start max
		
	*max=arr[0];
	
	while(j<arrSize){
	
		
		if(arr[j]>*max){
			
		*max=arr[j];
			
		}
		
		j++;
	}
	
	// end max
	
	// start average
		
	
	for(int k=0;k<arrSize;k++){
		
		sumOfArray=sumOfArray+arr[k];
	}
	
	*avg=(sumOfArray/arrSize);
	// end average
		
	
	
}


