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

int z(int n)
{
	int i,t,r;
	t=0;
	r=(int)sqrt(n)+1;
	for(i=3;i<=r;i=i+2)
	{
		if(n%i==0)
		{
			t++;
			break;
		}
	}
	if(t==0)
		return(1);
	else
		return(0);
}
int main()
{
	int m,i,j;
	scanf("%d",&m);
	for(i=3;i<=m/2;i=i+2)
	{
		if(z(i))
		{
			j=m-i;
			if(z(j))
			printf("%d %d\n",i,j);
			
		}
	}
	
	return 0;
}

