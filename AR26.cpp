#include<iostream>    
  
int main(){  
    std::ios::sync_with_stdio(false);  
    std::cin.tie(NULL);  
    std::cout.tie(NULL);  
    int row,col;    
    std::cin>>row>>col;   
    int round=row*col;    
    int boy=0,student;    
    for(int i=0;i<round;i++){    
        std::cin>>student;   
        if(student==1){    
            boy++;    
        }    
    }    
    int girl=round-boy;    
    if(boy>girl)    
        std::cout<<"1\n";   
    else if(girl>boy)    
        std::cout<<"0\n";   
    else    
        std::cout<<"2\n";   
}  
