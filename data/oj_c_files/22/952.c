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

main()
{ 
	unsigned int a[301],x;
	int n=1,i,j;
	char c;
	do
	{
		scanf("%d",&a[n]);
		c=getchar();
		n++;
	}while(c!='\n');
	n=n-1;
	if(n==1) printf("No");
	else{
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			if(a[j]>=a[j+1])
			{
				x=a[j];
				a[j]=a[j+1];
				a[j+1]=x;
			}
		}
	}
	i=n;
	while(i>=2)
	{
		if(a[i]>a[i-1])
		{
			printf("%u",a[i-1]);
			break;
		}
		i--;
	}
	if(i==1) printf("No");}
	return 0;
}