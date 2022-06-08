#include<iostream>

using namespace std;
    
int main(){   
    unsigned long fibonacci[94];   
    fibonacci[0]=0;   
    fibonacci[1]=1;   
    unsigned long i,j,a,b;   
    for(i=2;i<=93;i++){   
        fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];   
    }   
    cin>>a>>b; 
    i=0,j=0;  
    while(fibonacci[i]<a)  
        i++;  
    while(fibonacci[j]<=b)  
        j++;  
    cout<<j-i<<endl;
    return 0;  
}
