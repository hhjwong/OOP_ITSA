#include<iostream>      
#include<cstdlib>      
#include<cstring>  
  
using namespace std;  
      
int main(){      
    int round;    
    char a[9],b[9];    
    int value,sum;    
    cin>>round;    
    for(int r=0;r<round;r++){    
        value=sum=0;    
        cin>>a>>b;    
        value=(a[0]-48)*128+(a[1]-48)*64+(a[2]-48)*32+(a[3]-48)*16+(a[4]-48)*8+(a[5]-48)*4+(a[6]-48)*2+(a[7]-48);    
        sum=value;    
        value=(b[0]-48)*128+(b[1]-48)*64+(b[2]-48)*32+(b[3]-48)*16+(b[4]-48)*8+(b[5]-48)*4+(b[6]-48)*2+(b[7]-48);    
        sum=sum+value;    
        cout<<sum<<endl;    
    }    
    return 0;      
}  
