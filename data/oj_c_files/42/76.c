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
	int n,k,i,j,c=0,t,a[100000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&k);
	t=a[n-1];
	if(t==k) a[n-1]+=1;    /*???????k????????*/
	for(i=0;i<(n-c-1);i++)
	{
		if(a[i]==k)
		{for(j=i;j<(n-1);j++) a[j]=a[j+1];
		    c+=1;i-=1;}
	}
	if(t!=k)
	 {for(j=0;j<(n-c-1);j++)
		printf("%d ",a[j]);
	 printf("%d",a[j]);}
	else if((t==k)&&(n>1))
	{for(j=0;j<(n-c-2);j++)
	   printf("%d ",a[j]);
	printf("%d",a[j]);}
}