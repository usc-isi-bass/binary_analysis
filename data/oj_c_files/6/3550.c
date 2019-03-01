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

void main()
{
 int m,a,b,i,j,k,sum;
 int s[100][100];
 int (*p)[100];
 scanf("%d",&m);
  for(k=0;k<m;k++)
  {p=s;sum=0;
   scanf("%d %d",&a,&b);
   for(i=0;i<a;i++)
    for(j=0;j<b;j++)
     {scanf("%d",*(p+i)+j);
      if(i==0||i==a-1||j==0||j==b-1)
       sum+=*(*(p+i)+j);}
   printf("%d\n",sum);
   } 
}