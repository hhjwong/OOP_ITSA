#include<iostream>  
  
using namespace std;  
  
int main(){    
    int sum=0;    
    int man,cnt;    
    for(int i=0;i<3;i++){    
        cin>>man>>cnt;  
        sum=sum+man*cnt;    
    }    
    cout<<sum<<endl;  
    return 0;    
}  
