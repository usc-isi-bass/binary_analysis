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
	char a[256];
	char b[256];
	char c[256];
	int i,j,k,l,m,n,sum=0;
	scanf("%s",a);
	scanf("%s",b);
	scanf("%s",c);
	m=strlen(a);
	n=strlen(b);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			if(b[j]==a[i+j]) sum+=1;
		if (sum==n) break;
		else sum=0;
	}
	if (sum==n)
	{
	for(k=i;k<n+i;k++)
		a[k]=c[k-i];
	}
	for(l=0;l<m;l++)
		printf("%c",a[l]);
	printf("\n");
	
	
}

