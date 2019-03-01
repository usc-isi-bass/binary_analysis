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


void reverse(int *p,int n)
{
	int temp,i,j;
	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp=*(p+i);
		*(p+i)=*(p+j);
		*(p+j)=temp;
	}
}

void main()
{
	int n,i,*p;
	scanf("%d",&n);
	p=(int *)malloc(sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",p+i);
	reverse(p,n);
	for(i=0;i<n;i++)
	{
		printf("%d",*(p+i));
		if(i!=n-1)
			printf(" ");
		else
			printf("\n");
	}
}