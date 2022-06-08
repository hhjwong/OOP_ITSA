#include<iostream>    
#include<cstdlib>    
  
using namespace std;  
    
int main(){    
    int student,check;    
    cin>>student;    
    int *chart=new int[student];    
    for(int i=0;i<student-1;i++){    
        cin>>check;  
        check--;    
        chart[check]=1;    
    }    
    for(int i=0;i<student;i++){    
        if(chart[i]==0){    
            cout<<i+1<<endl;  
            break;    
        }    
    }  
    return 0;    
}  
