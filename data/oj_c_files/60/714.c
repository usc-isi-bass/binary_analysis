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
	int i,j,n,k;
	scanf("%d",&n);
	if(n!=4||n!=3||n!=2||n!=1)
	{
		for(i=5;i<=n;i++)
		{
		k=(int)sqrt(i);
		for(j=2;j<=k;j++)
		{
			if(i%j==0||(i-2)%j==0)
				break;
		}
		if(j>k)
			printf("%d %d\n",i-2,i);
		}
	}
	if(n==4||n==3||n==2||n==1)
		printf("empty\n");
	return 0;

}
