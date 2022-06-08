#include<iostream>  

using namespace std;
  
int main(){
    int *chart=new int[600000000];   
    int num,input;  
    cin>>num;  
    for(int i=0;i<num-1;i++){  
        cin>>input;
        chart[input-1]=1;  
    }  
    for(int i=0;i<num;i++){  
        if(chart[i]==0){  
            cout<<i+1<<endl;
            return 0;  
        }  
    }  
    return 0;  
}
