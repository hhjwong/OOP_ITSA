#include<iostream>  
#include<algorithm>    
  
using namespace std;  
    
// int cmp (const void *a,const void *b) {    
//    return *(int*)b-*(int*)a;    
// }    
int main(){    
    int *input=new int[1000];    
    int count=0;    
    cin>>count;    
    for(int i=0;i<count;i++){    
        cin>>input[i];    
    }    
    // qsort(input,count,sizeof(int),cmp);  
    sort(input,input+count,greater<int>());  
    for(int i=0;i<count;i++){    
        cout<<i+1<<" "<<input[i]<<endl;    
    }    
    delete input;    
    return 0;    
}  
