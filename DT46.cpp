#include<iostream>  
#include<cstdlib>  
#include<cstring>  
#include<cctype>  
#define size 1000001  

using namespace std;
  
struct stack{  
    char oper;  
    struct stack *next;  
};  
void push(struct stack **top,char input){  
    struct stack *newptr=new struct stack;  
    if(newptr!=NULL){  
        newptr->oper=input;  
        newptr->next=(*top);  
        (*top)=newptr;  
    }  
    return;  
}  
char pop(struct stack **top){  
    struct stack *temp=*top;  
    char result=temp->oper;  
    (*top)=(*top)->next;  
    delete temp; 
    return result;  
}  
int priority(char oper){  
    switch(oper){  
        case'+': case'-':  
            return 1;  
        case'*': case'/':  
            return 2;  
        default:  
            return 0;  
    }  
}  
int compare(struct stack **top,char oper){  
    if((*top)==NULL){  
        return -1;  
    }  
    char a=(*top)->oper;  
    char b=oper;  
    return priority(a)-priority(b);  
}  
int isoper(char c){  
    if(c=='+'||c=='-'||c=='*'||c=='/'){  
        return 1;  
    }  
    return 0;  
}  
int main(){  
    struct stack *top=NULL;  
    char input[size];  
    char output[size];  
    int i,j;  
    memset(input,'\0',size);  
    cin.getline(input,size); 
    if(input[strlen(input)-1]=='\n'){  
        input[strlen(input)-1]='\0';  
    }  
    i=0;  
    j=0;  
    while(input[i]!='#'){  
        switch(input[i]){  
            case'(':  
                push(&top,input[i]);  
                break;  
            case'+':case'-':case'*':case'/':  
                while(compare(&top,input[i])>=0){  
                    output[j++]=pop(&top);  
                }  
                push(&top,input[i]);  
                break;  
            case')':  
                while(top->oper!='('){  
                    output[j++]=pop(&top);  
                }  
                pop(&top);  
                break;  
            default:  
                output[j++]=input[i];  
                break;  
        }  
        i++;  
    }  
    while(top!=NULL){  
        output[j++]=pop(&top);  
    }  
    cout<<output<<endl;
    return 0;  
}
