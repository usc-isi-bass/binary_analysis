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
    int a[100001],n,i,j,k,d=0;
    int *p;
    p=a;
    
    scanf("%d",&n);
    for(i=0;i<n;i++)
       scanf("%d",p+i);
    scanf("%d",&k);
    for(i=0;i<n;i++)
       if(*(p+i)==k)d++;    
    for(i=0;i<n;i++)
       {while(*(p+i)==k)
   //test       d++;
          for(j=i;j<n;j++)
             *(p+j)=*(p+j+1);}
    p=a;
    printf("%d",*p);
    for(i=1;i<n-d;i++)
       printf(" %d",*(p+i));
} 
