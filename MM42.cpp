#include<iostream>  
  
using namespace std;  
  
int main(){    
    int perfect[5]={6,28,496,8128,33550336};    
    int input,i=1;    
    cin>>input;  
    if(input>6)    
        cout<<"6";    
    while(input>perfect[i]&&i<5){    
        cout<<" "<<perfect[i];    
        i++;    
    }    
    if(input>6)    
        cout<<" is perfect number\n";    
    return 0;    
}  
