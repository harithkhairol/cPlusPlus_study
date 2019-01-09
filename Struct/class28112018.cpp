#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Student{
	
	string name;
	int matricNo;
	double marks;
	
};

void display(Student[]);

int main()
{
	const int NUM=3;
	
	Student student[NUM];
						  
						  
	for (int i=0; i<NUM; i++){
		
	cout<<"Enter Name "<<endl;
		
	cin>>student[i].name;
	
	cout<<"Enter Matric No "<<endl;
	
	cin>>student[i].matricNo;
	
	cout<<"Enter Mark "<<endl;
	
	cin>>student[i].marks;
		
	}
						  
	cout<<endl;
	
					  
	display(student);
	

    system("pause");

    return 0;
}

void display(Student student[]){
	
	const int NUM=3;
	
cout<<setiosflags(ios::left);
	
	for (int i=0; i<NUM; i++){
		
	cout<<setw(7)<<student[i].name<<setw(7)<<student[i].matricNo<<setw(7)<<student[i].marks<<endl;
		
	}
		
	
}



