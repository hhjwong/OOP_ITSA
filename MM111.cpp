#include<iostream>  
#include<cstdlib>  
int IP[32],mask[32],AND[32],key[32],ak[32];   
  
using namespace std;  
    
int power(int num,int pow_value){    
    int result=1;    
    for(int i=0;i<pow_value;i++)    
        result=result*num;    
    return result;    
}    
int main(){    
    int round;    
    cin>>round;    
    char input[16];    
    int i,j,knife,shift=0;    
    cin>>input;    
    for(i=0;i<4;i++){    
        int value=atoi(input+shift);    
        if(value>99)    
            shift=shift+4;    
        else if(value>9)    
            shift=shift+3;    
        else    
            shift=shift+2;    
        for(j=0;j<8;j++){    
            knife=power(2,7-j);    
            if(value>=knife){    
                IP[j+i*8]=1;    
                value=value-knife;    
            }    
            else    
                IP[j+i*8]=0;    
        }    
    }    
    shift=0;    
    cin>>input;    
    for(i=0;i<4;i++){    
        int value=atoi(input+shift);    
        if(value>99)    
            shift=shift+4;    
        else if(value>9)    
            shift=shift+3;    
        else    
            shift=shift+2;    
        for(j=0;j<8;j++){    
            knife=power(2,7-j);    
            if(value>=knife){    
                mask[j+i*8]=1;    
                value=value-knife;    
            }    
            else    
                mask[j+i*8]=0;    
        }    
    }    
    for(i=0;i<32;i++){    
        if(IP[i]==1&&mask[i]==1)    
            AND[i]=1;    
        else    
            AND[i]=0;    
    }    
    for(int r=0;r<round;r++){    
        int invalid=0,cmp=1;    
        shift=0;    
        cin>>input;    
        for(i=0;i<4;i++){    
            int value=atoi(input+shift);    
            if(value>255||value<0)    
                invalid=1;    
            if(value>99)    
                shift=shift+4;    
            else if(value>9)    
                shift=shift+3;    
            else    
                shift=shift+2;    
            for(j=0;j<8;j++){    
                knife=power(2,7-j);    
                if(value>=knife){    
                    key[j+i*8]=1;    
                    value=value-knife;    
                }    
                else    
                    key[j+i*8]=0;    
            }    
        }    
        for(i=0;i<32;i++){    
            if(key[i]==1&&mask[i]==1)    
                ak[i]=1;    
            else    
                ak[i]=0;    
        }    
        for(i=0;i<32;i++){    
            if(AND[i]!=ak[i])    
                cmp=0;    
        }    
        if(invalid==1)    
            cout<<"Invalid IP\n";    
        else if(cmp==0)    
            cout<<"False\n";    
        else    
            cout<<"True\n";    
    }    
    return 0;    
}  
