#include<iostream>    
#include<cstdlib>    
  
using namespace std;  
    
int main(){    
    int row,col,input,i,j,size;    
    cin>>row>>col;   
    size=row*col;    
    int *a=new int[size];   
    int *b=new int[size];    
    for(i=0;i<size;i++){    
        cin>>input;   
        a[i]=input;    
    }    
    for(i=0;i<size;i++){    
        cin>>input;   
        b[i]=input;    
    }    
    for(i=0;i<size;i++){    
        a[i]+=b[i];    
    }    
    for(i=0;i<row;i++){    
        cout<<a[i*col];    
        for(j=1;j<col;j++){    
            cout<<" "<<a[i*col+j];    
        }    
        cout<<endl;  
    }  
    return 0;    
}  
