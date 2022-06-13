#include<iostream>

using namespace std;
  
int main(){  
    int value[91];  
    value[0]=1;  
    value[1]=2;  
    value[2]=2;  
    for(int i=3;i<=91;i++){  
        value[i]=value[i-1]/4+value[i-2]/2+value[i-3];  
    }  
    int target;  
    cin>>target;
    cout<<value[target]<<endl;  
    return 0;  
}
