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
	void sort(char a[],int n);
	int m,n;
	char a[100],b[100];
	scanf("%s %s",a,b);
	m=strlen(a);
	n=strlen(b);
	sort(a,m);
	sort(b,n);
	if(strcmp(a,b)==0) printf("YES");
	else printf("NO");
}
void sort(char a[],int n)
{
	int i,j,k;
	char temp;
	for(i=0;i<n;i++)
	{ k=i;
	for(j=i+1;j<n;j++)
		if(a[k]>a[j]) k=j;
		if(k!=i)
		{
			temp=a[i];
			a[i]=a[k];
			a[k]=temp;
		}
	}
}