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
	int n,m,i,j=0,k,*a,*b;
	a=(int *)malloc(100000*sizeof(int));
	scanf("%d",&n);
	b=a;
	for(i=0;i<n;i++)
		scanf("%d",&*(a+i));
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		if(*(a+i)==m)
{
			for(k=i;k<n-1;k++)
			{
				j=*(a+k);
			    *(a+k)=*(a+k+1);
			    *(a+k+1)=j;
			}
			i--;
			n--;}
	}
	if(*(a+0)!=m)
		printf("%d",*(a+0));
	for(i=1;i<n;i++)
	{
		if(*(a+i)!=m)
			printf(" %d",*(a+i));
	}
	
}