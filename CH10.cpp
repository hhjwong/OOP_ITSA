#include<iostream>

using namespace std;
  
int main(){
    int *chart=new int[600000000];
    int num,input;  
    cin>>num; 
    for(int i=0;i<num-2;i++){  
        cin>>input;
        chart[input-1]=1;  
    }  
    int cnt=0;  
    for(int i=0;i<num;i++){  
        if(chart[i]==0){  
            if(cnt==0)  
                cout<<i+1;
            else  
                cout<<" "<<i+1<<endl;
            cnt++;  
        }  
        if(cnt>=2)  
            break;  
    }  
    return 0;  
}
