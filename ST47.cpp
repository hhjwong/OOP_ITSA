#include<iostream>    
#include<cctype>    
#include<cstring>    
#define positive 1    
#define negative 0    
  
using namespace std;  
    
int main(){  
    std::ios::sync_with_stdio(false);    
    std::cin.tie(NULL);    
    std::cout.tie(NULL);    
    int calculator[1025]={0};    
    int result=0;    
    int j;  
    char c;    
    int i=0;    
    int input=0;    
    int stat=positive;    
    int reps=0;    
    int round;    
    cin>>round;    
    while(reps!=round){    
        cin.get(c);    
        if(isdigit(c)){    
            input=input*10+c-48;    
        }    
        else if(c=='-'){    
            if(stat==negative){    
                input=input*(-1);    
            }    
            calculator[i]=input;    
            i++;    
            input=0;    
            stat=negative;    
        }    
        else if(c=='+'){    
            if(stat==negative){    
                input=input*(-1);    
            }    
            calculator[i]=input;    
            i++;    
            input=0;    
            stat=positive;    
        }    
        else if(c=='='){    
            if(stat==negative){    
                input=input*(-1);    
            }    
            calculator[i]=input;    
            i++;    
            input=0;    
            stat=positive;    
            for(j=0;j<i;j++){    
                result=result+calculator[j];    
            }    
            cout<<result<<endl;    
            i=0;    
            reps++;    
            result=0;    
        }    
    }    
    return 0;    
}  
