#include<iostream>    
#include<cstring>    
  
using namespace std;  
  
int main(){    
    char str[1000];    
    int newline=0;    
    cin.getline(str,1000);   
    if(str[strlen(str)-1]=='\n'){    
        str[strlen(str)-1]=0;    
        newline=1;    
    }    
    for(int i=0;i<strlen(str);i++)    
        str[i]-=3;    
    cout<<str;   
    if(newline==0)    
        cout<<endl;    
    return 0;    
}  
