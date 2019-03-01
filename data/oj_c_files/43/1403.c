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


main()
{
	int prime[10010]={0};
	int m;
	int i,j;

	scanf("%d",&m);
	prime[1]=1;
	for(i=2;i<=100;i++)
		for(j=i+1;j<=m;j++)
		{if(j%i==0) prime[j]=1;}

	for(j=3;j<=m/2;j=j+2)
		if(prime[j]==0&&prime[m-j]==0)
			printf("%d %d\n\n",j,m-j);
}
