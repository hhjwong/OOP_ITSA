#include<iostream>    
  
using namespace std;  
    
int main(){    
    int input,largest=-2147482648,smallest=2147483647;    
    for(int i=0;i<10;i++){    
        cin>>input;    
        if(input>largest)    
            largest=input;    
        if(input<smallest)    
            smallest=input;    
    }    
    cout<<"Largest number = "<<largest<<endl;    
    cout<<"Smallest number = "<<smallest<<endl;    
    return 0;    
}  
