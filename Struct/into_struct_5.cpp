#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Student{
		
	string name;
	int matricNo;
	double marks;
		
	};
	
	void display(Student []);

int main()
{
	Student student[3];
	
	
	for(int i=0; i<3;i++){
		
	cout<<"Enter name for student "<<i+1<<endl;
		
	cin>>student[i].name;
	
	cout<<"Enter matric no. for student "<<i+1<<endl;
	
	cin>>student[i].matricNo;
	
	cout<<"Enter marks for student "<<i+1<<endl;
	
	cin>>student[i].marks;
		
	}
	
	display(student);
	
	

    system("pause");
    return 0;
}

void display(Student student[]){
	
	for(int i=0; i<3;i++){
		
	cout<<"Name for student "<<i+1<<" is "<<student[i].name<<endl;
	
	cout<<"Matric no. for student "<<i+1<<" is "<<student[i].matricNo<<endl;
	
	cout<<"Marks for student "<<i+1<<" is "<<student[i].marks<<endl;
		
	}
	
}




