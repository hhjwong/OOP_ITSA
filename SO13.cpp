#include<iostream>    
#include<cstdlib>    
#include<cctype>    
  
using namespace std;  
    
struct record{    
    int num;    
    int min;    
    int sec;    
};    
char *getword(char *ptr,char *word){    
    char *qtr=word;    
    while(*ptr&&(isspace(*ptr)||*ptr=='\'')){    
        ptr++;    
    }    
    while(*ptr&&!(isspace(*ptr)||*ptr=='\'')){    
        *qtr++=*ptr++;    
    }    
    *qtr='\0';    
    if(qtr-word==0){    
        return NULL;    
    }    
    return ptr;    
}    
void swap(struct record *a,struct record *b){    
    int temp=a->num;    
    a->num=b->num;    
    b->num=temp;    
    temp=a->min;    
    a->min=b->min;    
    b->min=temp;    
    temp=a->sec;    
    a->sec=b->sec;    
    b->sec=temp;    
    return;    
}    
int main(){    
    char input[101];    
    char word[101];    
    struct record data[1000];    
    int count=0;    
    while(cin.getline(input,101)){    
        char *ptr=input;    
        ptr=getword(ptr,word);    
        data[count].num=atoi(word);    
        ptr=getword(ptr,word);    
        data[count].min=atoi(word);    
        ptr=getword(ptr,word);    
        data[count++].sec=atoi(word);    
    }    
    for(int i=0;i<count-1;i++){    
        for(int j=0;j<count-i-1;j++){    
            int a=(data[j].min)*60+data[j].sec;    
            int b=(data[j+1].min)*60+data[j+1].sec;    
            if(a>b)    
                swap(&data[j],&data[j+1]);    
        }    
    }    
    for(int i=0;i<3;i++){    
        cout<<data[i].num<<" "<<data[i].min<<"'"<<data[i].sec<<endl;    
    }    
    return 0;    
}  
