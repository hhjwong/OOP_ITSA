#include<iostream>  
  
using namespace std;  
      
int main(){      
    int max=0;    
    int input;    
    while(cin>>input){    
        if(input>max)    
            max=input;    
    }    
    cout<<max<<endl;    
    return 0;      
}  
