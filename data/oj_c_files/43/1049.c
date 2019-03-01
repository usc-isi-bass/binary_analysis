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

int SU(int n)
{
	int i,k=0;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
			k++;
	}
	if(k==0)
		return 1;
	else
		return 0;
}
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=3;i<=n/2;i++)
	{
		j=n-i;
		if(SU(i)==1)
		{
			if(SU(j)==1)
				printf("%d %d\n",i,j);
		}
	}
	return 0;
}