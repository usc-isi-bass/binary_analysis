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
{ int n,i,j,k;
  scanf("%d",&n);
  struct p{
         char num[100];
         int age;
         }pa[100],p[100],t;
  for(i=0;i<n;i++)
  {scanf("%s%d",&pa[i].num,&pa[i].age);}
  i=n-1;
  for(j=n-1;j>=0;j--)
  {
   if(pa[j].age<60)
    {p[i]=pa[j];
    i--;}
  }
  k=i+1;
  for(j=n-1;j>=0;j--)
  {
   if(pa[j].age>=60)
    {p[i]=pa[j];
    i--;}
  }
  for(j=0;j<k;j++)
  {for(i=0;i<k-j-1;i++)
   {if(p[i].age<p[i+1].age)
    {t=p[i];
     p[i]=p[i+1];
     p[i+1]=t;}
   }
  }
  for(i=0;i<n;i++)
  {printf("%s\n",&p[i].num);}
return 0;

}
