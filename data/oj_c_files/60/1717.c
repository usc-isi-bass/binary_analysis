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

int su(int i)
{
    int d=2;
    while(i%d!=0)
       {
          d=d+1;
       }
    if(d>=i)
       return (1);
    else
       return (0);     
} 
int main()
{
    int su(int i);
    int n,a,b;
    scanf("%d",&n);
    if(n>=5)
    {
       for(a=3;a<=n-2;a+=2)
       {
          b=a+2;
          if(su(a)&&su(b))
             printf("%d %d\n",a,b);
       }
    }
    else
     printf("empty");
}
