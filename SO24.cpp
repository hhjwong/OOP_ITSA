#include<iostream>    
#include<cstdlib>    
#include<cstring>    
#include<cctype>  
  
using namespace std;  
    
struct student{    
    int no;    
    char name[31];    
    int grade;    
    int rank;    
};    
char *getword(char *ptr,char *word){    
    char *qtr=word;    
    while(*ptr&&isspace(*ptr)){    
        ptr++;    
    }    
    while(*ptr&&!isspace(*ptr)){    
        *qtr++=*ptr++;    
    }    
    *qtr='\0';    
    if(qtr-word==0){    
        return NULL;    
    }    
    return ptr;    
}    
void swap(struct student *a,struct student *b){    
    int temp;    
    temp=a->no;    
    a->no=b->no;    
    b->no=temp;    
    temp=a->grade;    
    a->grade=b->grade;    
    b->grade=temp;    
    temp=a->rank;    
    a->rank=b->rank;    
    b->rank=temp;    
    char buff[31];    
    strcpy(buff,a->name);    
    strcpy(a->name,b->name);    
    strcpy(b->name,buff);    
    return;    
}    
int main(){    
    struct student data[1000];    
    char input[100];    
    char word[100];    
    int count=0;    
    while(cin.getline(input,100)){    
        char *ptr=input;    
        ptr=getword(ptr,word);    
        data[count].no=atoi(word);    
        ptr=getword(ptr,word);    
        strcpy(data[count].name,word);    
        ptr=getword(ptr,word);    
        data[count].grade=atoi(word);    
        count++;    
    }    
    int i,j;    
    for(i=0;i<count-1;i++){    
        for(j=0;j<count-i-1;j++){    
            if(data[j].grade<data[j+1].grade)    
                swap(&data[j],&data[j+1]);    
        }    
    }    
    for(i=0;i<count;i++){    
        data[i].rank=i+1;    
    }    
    for(i=0;i<count-1;i++){    
        for(j=0;j<count-i-1;j++){    
            if(data[j].no>data[j+1].no)    
                swap(&data[j],&data[j+1]);    
        }    
    }    
    for(int i=0;i<count;i++){    
        cout<<data[i].no<<" "<<data[i].name<<" "<<data[i].grade<<" "<<data[i].rank<<endl;    
    }    
}  
