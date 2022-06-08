#include<iostream>  
#include<cstdlib>  
#include<cstring>  
#include<cctype>

using namespace std;
  
struct list{  
    char name[101];  
    struct list *next;  
};  
char *getword(char *ptr,char *word){  
    char *qtr=word;  
    while((*ptr)&&(isspace(*ptr)||(*ptr)==',')){  
        ptr++;  
    }  
    while((*ptr)&&!isspace(*ptr)&&(*ptr)!=','){  
        *qtr++=*ptr++;  
    }  
    *qtr='\0';  
    if(qtr-word==0){  
        return NULL;  
    }  
    return ptr;  
}  
void enqueue(struct list **head,struct list **tail,char *name){  
    struct list *newptr=new struct list;  
    if(newptr!=NULL){  
        strcpy(newptr->name,name);  
        newptr->next=NULL;  
    }  
    if((*head)==NULL)  
        *head=newptr;  
    else  
        (*tail)->next=newptr;  
    *tail=newptr;  
    return;  
}  
void dequeue(struct list **ptr,int reps){  
    for(int i=0;i<reps-1;i++){  
        (*ptr)=(*ptr)->next;  
    }  
    struct list *trash=(*ptr)->next;  
    (*ptr)->next=(*ptr)->next->next;  
    delete trash;  
    return;  
}  
int main(){  
    int n,k;  
    char command[1001];  
    char word[21];  
    cin.getline(command,1001); 
    int round=atoi(command);  
    for(int r=0;r<round;r++){  
        struct list *head=NULL;  
        struct list *tail=NULL;  
        cin.getline(command,1001); 
        char *ptr=command;  
        ptr=getword(ptr,word);  
        n=atoi(word);  
        ptr=getword(ptr,word);  
        k=atoi(word);  
        // k++;  
        int check=0;  
        while(check<n){  
            cin.getline(command,1001); 
            ptr=command;  
            ptr=getword(ptr,word);  
            while(ptr!=NULL&&check<n){  
                enqueue(&head,&tail,word);  
                check++;  
                ptr=getword(ptr,word);  
            }  
        }  
        tail->next=head;  
        int first=1;  
        for(int i=0;i<n-1;i++){  
            if(first==1)  
                dequeue(&head,k-1);  
            else  
                dequeue(&head,k);  
            first=0;  
        }  
        cout<<head->name<<endl;  
    }  
    return 0;  
}
