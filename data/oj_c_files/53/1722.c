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
	int n,m=0,i,j,k=0;
	scanf("%d",&n);
	int s[305],a[305]={-1};
	for(i=0;i<n;i++)
	{scanf("%d",&s[i]);}
    for(i=0;i<n;i++)
	{
		k=0;
		for(j=0;j<m;j++)
		{	if(s[i]==a[j])
		{	break;}
		else {k++;continue;}
		}
		if(k==m)
		{a[m]=s[i];m++;k=0;}
	}

	for(i=0;i<m;i++)
	{if(i==0)
	printf("%d",a[i]);
	else
 printf(",%d",a[i]);
	}
	return 0;
}
