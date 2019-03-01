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
	int num,i,j,k,a[2][100000],m,n;
	scanf("%d",&num);
	for(i=0;i<=num-1;i++)
	{
		a[0][i]=0;
		a[1][i]=0;
	}
	for(;;)
	{
		scanf("%d %d",&m,&n);
		if(m==0&&n==0)
			break;
		else 
		{
			a[0][m]=a[0][m]+1;
			a[1][n]=a[1][n]+1;
		}
	}
	for(i=0;i<=num-1;i++)
	{
		if(a[0][i]==0&&a[1][i]==num-1)
			printf("%d",i);
	}
}