#include<iostream>  
  
using namespace std;  
  
int main(){    
    int perfect[5]={6,28,496,8128,33550336};    
    int input;    
    while(cin>>input){    
        for(int i=0;i<5;i++){    
            if(input>perfect[i]){    
                cout<<perfect[i]<<endl;    
            }    
        }    
    }    
    return 0;    
}  
