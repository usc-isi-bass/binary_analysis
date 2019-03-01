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

struct shuju
{
    char str[100];
    struct shuju * next;
};

struct shuju *create()
{
    
    struct shuju *head,*p1,*p2;
    p1=(struct shuju* )malloc(len);
    gets(p1->str);
    p1->next=NULL;
    while (1)
    { 

    	p2=p1;
        p1=(struct shuju* )malloc(len); 
        gets(p1->str);
        if(strcmp(p1->str,"end")==0) {free(p1);break;}
        p1->next=p2;
    }
    head=p2;
    return (head);
}

void print(struct shuju* head)
{

    struct shuju* p;
    p=head;
    while (p->next!=NULL)
    {
        puts(p->str);
       p=p->next;}
    puts(p->str);
}

void main()
{
    
    
    struct shuju *p;
    p=create();
    print(p);
}