#include<iostream>  
#include <iomanip>  
  
using namespace std;  
  
int main(){    
    int input,count;    
    int data[10000];    
    while(cin>>input){    
        data[count++]=input;    
    }    
    for(int i=0;i<count-1;i++){    
        for(int j=0;j<count-i-1;j++){    
            if(data[j]<data[j+1]){    
                int temp=data[j];    
                data[j]=data[j+1];    
                data[j+1]=temp;    
            }    
        }    
    }    
    if((count/2)*2==count){    
        int mid=(data[count/2]+data[(count/2)-1]);    
        if((mid/2)*2==mid)    
            cout<<"Median="<<mid/2<<endl;    
        else    
            cout<<"Median="<<mid/2<<".5"<<endl;    
    }    
    else{    
        cout<<"Median="<<data[count/2]<<endl;    
    }    
}  
