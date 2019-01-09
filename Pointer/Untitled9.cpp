#include <iostream>
using namespace std;

double withdraw(double& bal , double amt)
{

const double penalty= 15;

if (bal >= amt)
{
bal -= amt ;
}
else
{
amt = bal - penalty;
bal = penalty;
}

return amt;

}

int main(){

double personal_acct= 5500.50;
double joint_acct = 420.25 ;
double amtl , amt2 ;



amtl = withdraw(personal_acct , 1500);
amt2 = withdraw(joint_acct , 500) ;


cout <<"Amount withdrawed from personal account: " << amtl<<endl ;
cout <<"Balance personal account: " << personal_acct << endl ;
cout<<"Amount withdrawed from joint account: " << amt2 <<endl ;
cout << "Balance joint account : " << joint_acct<< endl ;

system("pause");

return 0; 

}
