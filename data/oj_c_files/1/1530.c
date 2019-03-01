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

int f(int x,int k);
int main()
{
    int i=1,n,m;
    int result;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    scanf("%d",&m);
    result=f(m,2);
    printf("%d\n",result);
    }
     return 0;
}
int f(int x,int k)
{
	int a=0;
    int i;
	if (x==1) 
    return 1;
	for (i=k;i<=x;i++)
	{
	if (x%i==0) 
    a=a+f(x/i,i);
    }
	return a;
}
