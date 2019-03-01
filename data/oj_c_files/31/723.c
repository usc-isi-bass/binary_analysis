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



struct Student
{
   char imf[100];
   struct Student *next,*pre;    
};

int main()
{
    
    struct Student *p,*q,*h;
    
    h=p=q=malloc(LEN);
    gets(q->imf);
    q->pre=q->next=NULL;
    
    while(strcmp(q->imf,"end")!=0)
    {
       p=q;
       q=malloc(LEN);
       q->next=NULL;
       q->pre=p;
       p->next=q;
       gets(q->imf);                     
    }
    
    while(p!=NULL)
    {
      puts(p->imf);   
      p=p->pre;            
    }
}
