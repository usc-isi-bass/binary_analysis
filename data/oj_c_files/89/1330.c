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
	int *man,n;
	scanf ("%d",&n);
	man=(int*)malloc(4*n);

	int i,j,k,sum=0;
	for (i=0;i<=n-1;i++)
		*(man+i)=0;

	for (k=0;;k++)
	{
		scanf ("%d%d",&i,&j);
		if (i==0&&j==0)
			break;
		if (*(man+j)!=-1)
			*(man+j)+=1;
		*(man+i)=-1;
	}
	for (i=0;i<=n-1;i++)
	{
		if (*(man+i)==n-1)
		{
			printf ("%d",i);
			sum=1;
			break;
		}
	}
	if(sum==0)
		printf("NOT FOUND");
	
	
	return 0;
}
