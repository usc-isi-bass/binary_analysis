#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


struct node;
struct node
{
    char id[len];
    char name[len];
    char sexual[len];
    char age[len];
    char score[len];
    char addr[len];
    struct node* next;
    struct node* pre;
};
char end[len]="end";
int main(){

    struct node* p;
    p=(struct node*)malloc(sizeof(struct node));
    p->pre=NULL;
    while(1){
        scanf("%s",p->id);              
        if(strcmp(p->id,end)==0)              
            break;
        scanf("%s%s%s%s%s",p->name,p->sexual,p->age,p->score,p->addr);  
        p->next = (struct node*) malloc(sizeof(struct node));    
        p->next->pre = p;           
        p=p->next;                                 
    }
    p=p->pre;                 
    free(p->next);              
    while(p!=NULL){                
        printf("%s %s %s %s %s %s\n",p->id,p->name,p->sexual,p->age,p->score,p->addr);   
        p=p->pre;                 
        if(p!=NULL)                 
            free(p->next);  
    }
    return 0;
}

