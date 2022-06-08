#include<iostream>   
#include<cctype>   
   
int main()   
{   
    char input[100];   
    int value;   
    while(std::cin.getline(input,100)){   
        value=0;   
        for(int i=0;isupper(input[i]);i++){   
            value=value*26+input[i]-64;   
        }   
        std::cout<<value<<std::endl;   
    }   
    return 0;   
}  
