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



struct num
{int nianling;
float defen;
char q[200],w[100],xingbie,xuehao[200];
struct num *next;
};
struct num *crea()
{long i;
  struct num *head;
  struct num *p1,*p2;
   p1=p2=(struct num *)malloc(LEN);
   head=p1;
   scanf("%s %s %c %d %f %s",&p1->xuehao,&p1->q,&p1->xingbie,&p1->nianling,&p1->defen,&p1->w);

head->next=NULL;
  for(;;)
    {  
p1=(struct num *)malloc(LEN);
scanf("%s",&p1->xuehao);if(p1->xuehao[0]!='e')      
{scanf("%s %c %d %f %s",&p1->q,&p1->xingbie,&p1->nianling,&p1->defen,&p1->w);

       p1->next=p2;
       p2=p1;}
else  {p1->next=p2,p2=p1;break;}
       }
   return(p1);
}
void main()
{

long nx,m,m0,tx,qx,q,mxh;
struct num *hi,*p,*t;
hi=crea();
t=hi->next;
for(p=t;p!=NULL;p=p->next)
{printf("%s %s %c %d %g %s\n",p->xuehao,p->q,p->xingbie,p->nianling,p->defen,p->w);
}
}

