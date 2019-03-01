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

int f(int x)
{
    int a,i;
	if((x==2)||(x==3))
		return(0);
	else
	{
	for(i=2;i<=sqrt(x);i++)
	{
		a=x%i;
		if(a==0)
			break;
	}
	if(a==0)
		return(1);
	else 
		return(0);
	}
}
void main()
{
	int j,k,n;
	scanf("%d",&n);
	for(j=6;j<=n;j+=2)
	{
		for(k=2;k<=(j/2);k++)
		{
		if((f(k)==0)&&(f(j-k)==0))
		{	printf("%d=%d+%d\n",j,k,j-k);
		    break;
		}
		
		}
	}
}

