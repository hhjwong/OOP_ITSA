#include<iostream>  
#include<cstdlib>  
#include<cstring>      
  
using namespace std;   
      
int main(){    
    char input[2000];    
    int round;    
    cin>>round;    
    for(int t=0;t<round;t++){    
        cin>>input;    
        char partition[4];    
        int result=0,index=strlen(input),reps=0;    
        index-=3;    
        while(index>=0){    
            strncpy(partition,input+index,3);    
            index-=3;    
            if((reps/2)*2==reps)    
                result=result+atoi(partition);    
            else    
                result=result-atoi(partition);    
            reps++;    
        }    
        int remain=3+index;    
        if(index!=0){    
            memset(partition,'\0',sizeof(partition));    
            strncpy(partition,input,remain);    
            if((reps/2)*2==reps)    
                result=result+atoi(partition);    
            else    
                result=result-atoi(partition);    
            reps++;    
        }    
        if(result%13==0)    
            cout<<"true\n";    
        else      
            cout<<"false\n";    
    }    
    return 0;      
}  
