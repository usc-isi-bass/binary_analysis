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
	int i,j,n,m,a[100],s[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(j=0;j<n-1;j++)
		for(i=j+1;i<n;i++)
			if(a[i]==a[j]&&a[j]!=0) a[i]=0;

    j=0;
	for(i=0;i<n;i++)
		if(a[i]) s[j++]=a[i];

	m=j;
	for(i=0;i<m-1;i++)
		printf("%d,",s[i]);
	printf("%d\n",s[m-1]);
}