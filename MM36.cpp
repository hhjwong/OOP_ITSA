#include<iostream>

using namespace std;

int main(){  
    int prime[3245];  
    int index=0,input;  
    for(int x=2;x<=30000;x++){  
        int stat=1;  
        for(int y=2;y<x;y++){  
            if(x%y==0)  
                stat=0;  
        }  
        if(stat==1){  
            prime[index++]=x;  
        }  
    }  
    while(1){  
        cin>>input;  
        if(input==0)  
            break;  
        index=0;  
        while(index<3245&&input>prime[index])  
            index++;  
        cout<<index<<endl;  
    }  
    return 0;  
}
