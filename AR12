#include<iostream>   
   
using namespace std;   
   
struct table{     
    int count;     
    int value;     
};     
void swap(struct table *a,struct table *b){     
    int buff=a->count;     
    a->count=b->count;     
    b->count=buff;     
    buff=a->value;     
    a->value=b->value;     
    b->value=buff;     
    return;     
}     
int main(){     
    struct table data[50];     
    int index=0;     
    int input;     
    while(cin>>input){     
        if(input==-999)     
            break;     
        else{     
            int i=0,query=0;     
            while(i<index&&query==0){     
                if(data[i].value==input){     
                    data[i].count++;     
                    query=1;     
                }     
                i++;     
            }     
            if(query==0){     
                data[index].value=input;     
                data[index++].count=1;     
            }     
        }     
    }     
    for(int i=1;i<=index;i++){     
        for(int j=1;j<=index-i;j++){     
            if(data[j].value>data[j-1].value){     
                swap(&data[j],&data[j-1]);     
            }     
        }     
    }     
    for(int i=0;i<index;i++)   
        cout<<data[i].value<<" "<<data[i].count<<endl;   
    return 0;     
}  
