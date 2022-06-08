#include<iostream>  
#include<cstdlib>  

using namespace std;
  
int main(){  
    int input;  
    cin>>input;  
    while((input/2)*2==input)  
        input=input/2;  
    while((input/3)*3==input)  
        input=input/3;  
    while((input/5)*5==input)  
        input=input/5;  
    if(input==1)  
        cout<<"Regular number!\n";  
    else  
        cout<<"Irregular number!\n";  
    return 0;  
}
