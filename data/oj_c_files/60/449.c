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

int sushu(int n)
{
	int i,k=1;
	for(i=2;i<n;i++)
	{
		if(n-(n/i)*i>0)
			k=k*1;
		else k=k*0;
	}
	return(k);
}
void main()
{
	int n,i,k=0;
	scanf("%d",&n);
	for(i=5;i<=n;i++)
	{
		if((sushu(i)>0)&&(sushu(i-2)>0))
		{
			printf("%d %d\n",i-2,i);
			k=k++;
		}
	}
	if(k==0)
		printf("empty");
}
