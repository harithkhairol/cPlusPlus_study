// Name: Muhammad Harith bin Khairolanuar
// Matric No: 1816349

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <string.h>
using namespace std;

const int NUM=21;

int calculateScore(string, string);
float calculatePercent(float);
char calculateGrade(float);
void populateData();
void readData();




int main(){
	
	// create txt file with data function
	populateData();
	
	cout<<setiosflags(ios::left);
	string trueAnswer="TFFTFFTTTTFFTFTFTFTT";
	
	cout<<"This is the program for History True/False test."<<endl;
	cout<<"It calculates the scores of students from Section 6 and determines their grade."<<endl;
	
	cout<<"\nThese are the results for students from Section 6.\n"<<endl;
	
	cout<<setw(6)<<"No."<<setw(14)<<"Matric No."<<setw(24)<<"Student's Answer'"<<setw(8)<<"Score"<<setw(14)<<"Percent(%)"<<setw(18)<<"Grade"<<endl;
	cout<<"-----------------------------------------------------------------------"<<endl;

	ifstream theFile("student.txt");
	
	int matricNum;
	string answer;
	string answer2;
	string answer3;
	int count =1;
	int score;
	float percent;
	char grade;

 if (theFile.is_open())
  {
  	
  	getline(theFile, trueAnswer);
  	
  	cout<<setw(6)<<"ANS"<<setw(14)<<"XXXXXXX"<<setw(24)<<trueAnswer<<setw(8)<<40<<setw(14)<<fixed<<setprecision(2)<<100.00<<setw(18)<<"A\n"<<endl;
  	
    while (theFile>>matricNum>>answer)
    {
    
    
    getline(theFile, answer2);
    answer3=answer +answer2;
    
    score = calculateScore(answer3, trueAnswer);
    percent=calculatePercent(score);
    grade = calculateGrade(percent);
    
  	
    cout<<setw(2)<<count<<setw(4)<<"."<<setw(14)<<matricNum<<setw(24)<<answer3<<setw(8)<<score<<setw(14)<<fixed<<setprecision(2)<<percent<<setw(18)<<grade<<endl;
    count++;

	  
      
      
    }
    theFile.close();
  }

	system("pause");
	return 0;
	
}

float calculatePercent(float count){
	
	float result = (count/40)*100;
	
	return result;
	
}

char calculateGrade(float percent){
	
	char grade;
	
	if(percent>=90 && percent<=100){
	
	grade='A';
		
	}
	
	else if(percent>=80 && percent<=89.88){
	
	grade='B';
		
	}
	
	else if(percent>=70 && percent<=79.99){
	
	grade='C';
		
	}
	
	else if(percent>=60 && percent<=69.99){
	
	grade='D';
		
	}
	
	else if(percent>=0 && percent<=59.99){
	
	grade='F';
		
	}
	
	return grade;
	
}



int calculateScore(string student1_ans, string answer){
	
	int count=0;
	
	for(int i=0;i<NUM-1;i++){
		

	if(isspace(student1_ans[i])){
		
	count=count+0;

	}
	
	else if(answer[i]!=student1_ans[i]){
		
	count=count-1;
		
	}
		
	else if(answer[i]==student1_ans[i]){
	
	count=count+2;	
	
		}

	}
	
	return count;
	
}

void populateData(){
	
	ofstream theFile("student.txt");
	theFile<<"TFFTFFTTTTFFTFTFTFTT"<<endl;
	theFile<<181001<<" "<<"FFTTTFTFTFFFTFTTFTFT"<<endl;
	theFile<<181002<<" "<<"TFFTFFTTFFTFTFTFTTTT"<<endl;
	theFile<<181003<<" "<<"FTTFTTFTFTTFTTTFTFTT"<<endl;
	theFile<<181004<<" "<<"TFFTFFTTTTFFFTTFTFFT"<<endl;
	theFile<<181005<<" "<<"TTFTFTTTFTTFTFTTTFTF"<<endl;
	theFile<<181006<<" "<<"TFTFTFTFTTTTFTTTFFTT"<<endl;
	theFile<<181007<<" "<<"FFTTFTTTF TFTTTTTFTF"<<endl;
	theFile<<181008<<" "<<"TFFTFFTTTTFFTFTFTFFF"<<endl;
	theFile<<181009<<" "<<"TFTFTTTFFTFTTFTFTTFT"<<endl;
	theFile<<181010<<" "<<"T TFTTTTFTFTFTTTFTTT"<<endl;
	theFile<<181011<<" "<<"TFTFTTTFTFTFTTTTFFTT"<<endl;
	theFile<<181012<<" "<<"TFFTFFTTFFTFTFTF FTT"<<endl;
	theFile<<181013<<" "<<"TFFTFFTTTTFTTTFFFTFT"<<endl;
	theFile<<181014<<" "<<"TTTFTTFTTTFTTFTTFTTT"<<endl;
	theFile<<181015<<" "<<"TFTFTTTFTFTTTFTTTFTT"<<endl;
	theFile<<181016<<" "<<"TFFTFFF TTTFTFTFFFTT"<<endl;
	theFile<<181017<<" "<<"TFTTFTTFTTTFFFTFTTTT"<<endl;
	theFile<<181018<<" "<<"TFFTFFTTFTFFTFTFTFFF"<<endl;
	theFile<<181019<<" "<<"FFFFFFTTTTFFTFTFTFTT"<<endl;
	theFile<<181020<<" "<<"TFTTFTTFTFFFTFTFTFTT"<<endl;
	theFile<<181021<<" "<<"TFFTF TFTFTTTFTFTFTT"<<endl;
	theFile<<181022<<" "<<"TFTFTTTFFTFTFTTTFTTT"<<endl;
	theFile<<181023<<" "<<"TTTFTTTFTFFFT TFTFTT"<<endl;
	theFile<<181024<<" "<<"FFTFTTTFTTFFFFTTTTFT"<<endl;
	theFile<<181025<<" "<<"TTFTFTFTTTFFFTFTFFTT"<<endl;
	
}

