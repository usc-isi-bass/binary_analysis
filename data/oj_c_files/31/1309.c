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
   char xinxi[100];
   struct stu *down;
};
int n=0;

struct stu * creat()
{
    struct stu *top=NULL;
    struct stu *p1=NULL,*p2=NULL;
    p1=p2=(struct stu *)malloc(LEN);
   gets(p1->xinxi);
    while(p1->xinxi[0]!='e')
 { 
  n++;
  if(n==1)
   p1->down=NULL;
  else  
   p1->down=p2;
  top=p1;
  p2=p1;
  p1=(struct stu *)malloc(LEN);
  gets(p1->xinxi);
 }
 return(top);
}
void main()
{
 struct stu *top,*p;
 top=creat();
 p=top;
    while(n!=0)
 {n--;
 puts(p->xinxi);
 p=p->down;
 }
}
