#include<iostream>    
#include<cstring>    
#include<cctype>  
  
using namespace std;  
    
int main(){    
    char input[1001];    
    cin.getline(input,1001);  
    if(input[strlen(input)-1]=='\n')    
        input[strlen(input)-1]=0;    
    for(int i=0;i<strlen(input);i++){    
        if(isupper(input[i]))    
            input[i]=(input[i]-65+13)%26+65;    
        else if(islower(input[i]))    
            input[i]=(input[i]-97+13)%26+97;    
    }    
    cout<<input<<endl;   
    return 0;    
}  
