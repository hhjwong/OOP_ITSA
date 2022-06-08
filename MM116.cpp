#include<iostream>  
#include<cstdlib>  
#include<cstring>      
  
using namespace std;   
      
int main(){      
    char input[2000];      
    cin.getline(input,1000);      
    int round=atoi(input);      
    for(int t=0;t<round;t++){    
        cin>>input;      
        int i=strlen(input)-1;      
        int odd=0,even=0;      
        while(i>=0&&isdigit(input[i])){      
            if((i/2)*2==i)      
                even=even+input[i]-48;      
            else      
                odd=odd+input[i]-48;      
            i--;      
        }      
        int result=odd-even;      
        if(result%11==0)    
            cout<<"true\n";      
        else      
            cout<<"false\n";      
    }      
    return 0;      
}  
