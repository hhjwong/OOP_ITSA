#include<iostream>  

using namespace std;

int main(){  
    unsigned long long fibonacci[94];  
    fibonacci[0]=0;  
    fibonacci[1]=1;  
    int i;  
    for(i=2;i<=93;i++){  
        fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];  
    }  
    unsigned long input;  
    int round;  
    cin>>round;  
    for(int i=0;i<round;i++){  
        cin>>input;  
        if(input<=94){  
            cout<<fibonacci[input]<<endl;  
        }  
    }  
}
