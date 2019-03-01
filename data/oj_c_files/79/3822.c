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

void king(int n,int m)
{
	int i,j=1,a[300],k=1;
	for(i=1;i<=n;i++)
		a[i]=i;
	while(n>1)
	{
		j=(j-1+m)%n;
		if(j!=0)
		{
			for(i=j;i<n;i++)
				a[i]=a[i+1];
		}
			else j=1;
			n=n-1;
	}
	printf("%d\n",a[1]);
}
void main()
{
	int n[30],m[30],i,j=0;
	do 
	{
		scanf("%d%d",&n[j],&m[j]);
		j++;
	}while(n[j-1]!=0&&m[j-1]!=0);
	for (i=0;i<j-1;i++)
		king(n[i],m[i]);
}
