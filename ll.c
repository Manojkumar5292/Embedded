#include<stdio.h>
#include<stdlib.h>

struct ll
{
   int data;
   struct ll *prev;
   struct ll *next;  
};



int main(){

    struct ll *head=NULL;
    head = (struct ll *)malloc(sizeof(struct ll ));
    head->data = 0;
    head->next=NULL;
    
    



    return 0;
}
