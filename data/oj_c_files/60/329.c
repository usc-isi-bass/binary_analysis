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
     int c=0,n,i,sq,k,j=0,s[100000]={0};
     scanf("%d",&n);
     for(i=3;i<n+1;i=i+2)
     {
       j=0;
       sq=sqrt(i);
       for(k=2;k<=sq;k++)
       {
       if(i%k==0)
       j++;
       }
       if(j==0) s[i]=i;
     }
       for(i=3;i<=n;i=i+2)
       {
       if(s[i]!=0&&s[i+2]!=0)
       {
       printf("%d %d\n",s[i],s[i+2]);
       c++;
       }
       }
       if(c==0)
       printf("empty");
}
