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

int main()
{
    int n,i;
    scanf ("%d",&n);
    struct patient
    {
        char ID[10];
        int age;
        struct patient *next;
        struct patient *pre;
    };
    struct patient *p,*head,*q,*m,*temp;
    p=(struct patient*)malloc(sizeof(struct patient));
    head=p;
    temp=(struct patient*)malloc(sizeof(struct patient));
    for (i=0;i<n;i++)
    {
        scanf ("%s %d",p->ID,&p->age);
        if(i!=n-1)
        {
            p->next=(struct patient*)malloc(sizeof(struct patient));
            p->next->pre=p;
            p->next->next=NULL;
            p=p->next;
        }
    }
    for (p=head;p!=NULL;p=p->next)
    {
        for (q=p->next;q!=NULL;q=q->next)
        {
            if ((p->age < q->age)&&(q->age>=60))
            {
                for (m=q;m!=p;m=m->pre)
                {
                    temp->age=m->age;
                    m->age=m->pre->age;
                    m->pre->age=temp->age;
                    strcpy(temp->ID,m->ID);
                    strcpy(m->ID,m->pre->ID);
                    strcpy(m->pre->ID,temp->ID);
                }
            }
        }
    }
    for (p=head;p!=NULL;p=p->next)
    printf ("%s\n",p->ID);
    return 0;
}
