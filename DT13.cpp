#include<iostream>  
#include<cstdlib>  
#include<cstring>  
#include<cctype> 

using namespace std;
  
struct stack{  
    int data;  
    struct stack *nextptr;  
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
    if(qtr-word=='\0'){  
        return NULL;  
    }  
    return ptr;  
}  
void push(struct stack **topptr,int value){  
    struct stack *newptr=new struct stack;  
    if(newptr!=NULL){  
        newptr->data=value;  
        newptr->nextptr=*topptr;  
        *topptr=newptr;  
    }  
    return;  
}  
int pop(struct stack **topptr){  
    struct stack *tempptr=*topptr;  
    int popvalue=(*topptr)->data;  
    *topptr=(*topptr)->nextptr;  
    delete tempptr;  
    return popvalue;  
}  
int main(){  
    struct stack *stackptr=NULL;  
    int value,a,b;  
    char *input=new char[5000];  
    char *word=new char[1000];  
    while(cin.getline(input,5000)){  
        if(input[strlen(input)-1]=='\n')  
            input[strlen(input)-1]=0;  
        if(strcmp("0",input)==0)  
            break;  
        for(int i=0;i<strlen(input);i++){  
            if(isdigit(input[i])){  
                value=input[i]-48;  
                push(&stackptr,value);  
            }  
            else if(input[i]=='+'){  
                value=pop(&stackptr)+pop(&stackptr);  
                push(&stackptr,value);  
            }  
            else if(input[i]=='-'){  
                a=pop(&stackptr);  
                b=pop(&stackptr);  
                value=b-a;  
                push(&stackptr,value);  
            }  
            else if(input[i]=='*'){  
                value=pop(&stackptr)*pop(&stackptr);  
                push(&stackptr,value);  
            }  
            else if(input[i]=='/'){  
                a=pop(&stackptr);  
                b=pop(&stackptr);  
                value=b/a;  
                push(&stackptr,value);  
            }  
        }  
        value=pop(&stackptr);  
        cout<<value<<endl;
        value=0;  
    }
    return 0;  
}
