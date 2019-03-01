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
	int a[100],b[100]={0};
	int i,j=0,k=1,m,n=1;
	scanf("%d",&m);
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	b[0]=a[0];
	for(i=1;i<m;i++)
	{
		while(j<k&&b[j]!=a[i])
		{
			j++;
		}
		if(j==k) {k++;b[k-1]=a[i];j=0;}
		else j=0;
	}
	
	for(i=0;i<k-1;i++)
		printf("%d,",b[i]);
	printf("%d\n",b[k-1]);
}
