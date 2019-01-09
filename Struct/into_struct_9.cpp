#include <iostream>
using namespace std;

union Student1 {   //defining a union
   char name[32];
   float cgpa;
   int matric_no;
};

struct Student2 {
   char name[32];
   float cgpa;
   int matric_no;
};

int main(){
      
   Student1 stud1; 
   Student2 stud2; 
    
   cout << "Size of union = " << sizeof(stud1);
   cout << "Size of structure = " << sizeof(stud1) << endl;
   system("pause");
   return 0;
}

