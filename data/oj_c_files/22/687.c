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

	int a[300];
	int m,n,i=0,s;
int max()
{
	int k,j;
	k=a[0];
	for(j=1;j<=i;j++)
	{
		if(a[j]>k)
			k=a[j];
	}
	return k;
}
void main()
{
	scanf("%d",&a[0]);
	while(getchar()==',')
	{
		i++;
		scanf("%d",&a[i]);	
	}
	m=max();
	for(s=0;s<=i;s++)
		if(a[s]==m)
			a[s]=-1;
	n=max();
	if(n!=-1)
		printf("%d",n);
	else
		printf("No");
}
