#include <iostream>

using namespace std;

int main()
{
    int i,j,k;
    
    
    //start upper diamond
    
    for(i=1;i<=4;i++){
        
        for(k=1;k<=4-i;k++){
            
            cout<<" ";
            
        }
        
        
        
        for(j=1;j<=i;j++){
            
            cout<<"**";
            
        }
        
        cout<<endl;
        
    }
    
    //end upper diamond
    
    //start lower diamond
    
    for(i=1;i<=4;i++){
        
        for(j=1;j<=5-i;j++){
            
            cout<<"**";
            
        }
        
        cout<<endl;
        
        for(k=1;k<=i;k++){
            
            cout<<" ";
            
        }
        
        
    }
    
    //end lower diamond

    return 0;
}
