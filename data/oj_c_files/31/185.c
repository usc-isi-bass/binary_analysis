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

struct stu
{
       char x[300];
       struct stu *next;
};

void creat1(struct stu *head,char *p)           //?????
{
     struct stu *pre,*p1,*s;
     s=(struct stu *)malloc(sizeof(struct stu));
     strcpy(s->x,p);
     pre=head;
     p1=pre->next;
     pre->next=s;
     s->next=p1;
}

void creat2(struct stu *head,char *p)           //?????
{
     struct stu *pre,*p1,*s;
     s=(struct stu *)malloc(sizeof(struct stu));
     strcpy(s->x,p);
     pre=head;
     p1=pre->next;
     for(;p1!=NULL;)
     {
                   pre=p1;
                   p1=p1->next;
     }
     pre->next=s;
     s->next=p1;
}

int main()
{
    int i,j,k,m,n;
    char *p;
    p=(char *)malloc(300*sizeof(int));
    struct stu *head,*s;
    head=(struct stu *)malloc(sizeof(struct stu));
    head->next=NULL;
    for(i=0;;i++)
    {
                 gets(p);
                 if(*(p+0)=='e')
                 {
                                break;
                 }
                 else
                 {
                     creat1(head,p);
                 }
    }
    s=head->next;
    for(;s!=NULL;)
    {
                  puts(s->x);
                  s=s->next;
    }
    return 0;
}
  