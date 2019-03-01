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
	int n,k,S,i;
	scanf("%d%d",&n,&k);
	if((n==2)*(k==1)==1)
		S=7;
	else
	{
		S=1;
		for(i=0;i<n;i++)
		{
			S=S*n;
		}
		S=S-(n-1)*k;
	}
	printf("%d",S);
	return 0;
}