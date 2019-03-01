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

void sort(char a[],int n)
{
	int i,j,k;
	char t;
	for(i=0;i<n-1;i++)
	{
		k=i;
	    for(j=i+1;j<n;j++)
		{if(a[j]>a[k]) k=j;}
		if(k!=i)
		{t=a[i];a[i]=a[k];a[k]=t;}
	}
}

void main()
{
	int m,n;
	char a[20],b[20];
	scanf("%s %s",a,b);
	m=strlen(a);
	n=strlen(b);
	 sort(a,m);
	 sort(b,n);
	 if(strcmp(a,b)==0) printf("YES\n");
	 else printf("NO\n");
}
