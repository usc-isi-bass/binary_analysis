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
{int a[100000],n,m,j,i,*p;
scanf("%d",&n);
p=a;
for (i=0;i<n;i++)
scanf("%d",p++);
scanf("%d",&m);
p=a;

for(i=0;i<n;i++)
{if (*(p+i)==m)
{for(j=i;j<n;j++)
*(p+j)=*(p+j+1);
i=i-1;n=n-1; }}
p=a;

for(i=0;i<n-1;i++,p++)
printf("%d ",*p);
printf("%d",*p);
      } 
      

      
