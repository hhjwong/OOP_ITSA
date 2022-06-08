#include<iostream>  
  
using namespace std;  
    
int main(){    
    int result[]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192};    
    int input,round;    
    cin>>round;    
    for(int t=0;t<round;t++){    
        cin>>input;    
        cout<<result[input]<<endl;    
    }    
    return 0;    
}  
