#include<iostream>  
#include<cstring>  
  
using namespace std;  
  
int main(){    
    char input[100000]={'\0'};    
    int count=0;  
    char output[100000]={'\0'};    
    while(cin>>input){    
        int i;  
        for(i=0;i<100000;i++){   
            if (input[i]!='\0'){    
                count++;    
            }    
        }    
        for(i=0;i<=count-1;i++){    
            output[count-1-i]=input[i];    
        }    
        if(strcmp(input,output)==0){    
            cout<<"yes\n";  
        }    
        else{    
            cout<<"no\n";   
        }    
        count=0;    
        for(i=0;i<100000;i++){    
            input[i]='\0';    
            output[i]='\0';    
        }    
    }    
}  
