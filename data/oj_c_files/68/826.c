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

void main()
{
	int sushu(int a);
	int n,i,m,j,k;
	scanf("%d",&n);
	for (k=6;k<=n;k++,k++)
	{   for (j=3;j<=k/2;j++,j++)
	{       if (sushu(j)==1)
			   m=k-j;
	        if (sushu(m)==1)
			{	printf("%d=%d+%d\n",k,j,m);
			break;}
	}
	}
}
    int sushu(int a)
	{   int i;
	    for (i=3;i<=sqrt(a);i++,i++)
			if (a%i==0)
				break;
		if (i>sqrt(a))
			return (1);
		else
			return(0);
	}




