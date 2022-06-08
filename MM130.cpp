#include<iostream>  
  
using namespace std;  
    
int main(){    
    int data[101]={0};    
    int count=0;    
    int input;    
    while(cin>>input){    
        data[input]++;    
        count++;    
    }    
    int i=0,total=0;    
    if(count%2==1){    
        while(total<(count+1)/2&&i<101){    
            total=total+data[i++];    
        }    
        cout<<i-1<<endl;    
    }    
    else{    
        while(total<count/2&&i<101){    
            total=total+data[i++];    
        }    
        int j=i;    
        if(total>count/2){    
            cout<<i-1<<endl;    
        }    
        else{    
            while(data[j]==0&&total<count){    
                j++;    
            }    
            cout<<(i+j-1)/2<<endl;    
        }    
    }    
    return 0;    
}  
