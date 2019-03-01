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
{ int word=0,sum=0,i,j,a[301]={0};char c;
   for(i=0;(c=getchar())!='\n';i++)
    if (c==' ')word=0;
     else 
     {
       if(word==0)
       { word=1;sum=sum+1;j=sum;}
        a[j]=a[j]+1;
      }
    printf("%d",a[1]);
    if(sum>=2)
     for(i=2;i<=sum;i++)
    printf(",%d",a[i]);
}

