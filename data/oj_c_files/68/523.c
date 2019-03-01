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
	int n,i,j,k,m,q,p;
	scanf("%d",&n);
	for(i=6;i<=n;i=i+2)
	{
		for(m=3;m<i-2;m++)
		{
			p=sqrt(m);q=sqrt(i-m);
			for(j=2;j<=p;j++)
			if(m%j==0)break;
			for(k=2;k<=q;k++)
			if((i-m)%k==0)break;
			if(j==(p+1)&&k==(q+1))break;
		}
		printf("%d=%d+%d\n",i,m,i-m);
	}
}