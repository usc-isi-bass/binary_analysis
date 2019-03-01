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

int f(int n)
{
    int i,a;
    a=sqrt(n);
    for(i=2;i<=a;i++)
    {
            if(n%i==0)  return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=3;i<=(n/2);i++)
    {
          
          if(f(i)&&f(n-i)) printf("%d %d\n",i,(n-i));
    }
    getchar();
    getchar();
    getchar();
}
    
    
