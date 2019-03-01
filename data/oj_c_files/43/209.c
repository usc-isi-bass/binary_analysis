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

int fun(int x);
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=3;i<=a/2;i+=2)
    {
                      if(fun(i)==1&&fun(a-i)==1)
                      printf("%d %d\n",i,a-i);
                      }
    return 0;
}
int fun(int x)
{
    int i;
	for(i = 2; i <= (int)sqrt(x); i++)
		if(x % i == 0)
			return 0;
	return 1;
}
    
