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


int check(int x)
{ 
	int k,n;
	n=(int)sqrt(x);
	for (k=2;k<=n;k++)
		if (x%k==0) 
			return(0);
	return(1);
}

void main()
{
	int n,i,r=0;
	scanf("%d",&n);

	for(i=2;i<=n-2;i++)
	{
		if(check(i)&&check(i+2))
		{	printf("%d %d\n",i,i+2);
			r++;
		}
	}
	if(r==0)
		printf("empty\n");
}