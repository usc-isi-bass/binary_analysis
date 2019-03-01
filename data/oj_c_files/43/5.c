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
    int m,a,b,j,i;
    scanf("%d",&m);
    for(a=3;a<m;a=a+2)
      for(b=3;b<m;b=b+2)
        {
            if(a+b==m&&a<=b)
          {
            for(i=2;i*i<=a;i++)
             if(a%i==0) break;
            for(j=2;j*j<=b;j++)
             if(b%j==0) break;
            if(i*i>a&&j*j>b) printf("%d %d\n",a,b);
          }
        }
}