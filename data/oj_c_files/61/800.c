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
    int n,i,j,k,s,a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      scanf("%d",&k);
      if(k==1||k==2)
      {
        printf("1\n");
        continue;
        }
        else
        {
          a=1;
          b=1;  
        for(j=3;j<=k;j++)
        {
           s=a+b;
           a=b;
           b=s;
           }
           printf("%d\n",s);
           }
           }
           getchar();
           getchar();
           }