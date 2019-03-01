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
	int n,i,j;
	char a[100],b[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s%s",a,b);
		for(j=strlen(a)-1;j>=strlen(a)-strlen(b);j--)
			if(a[j]>=b[j-strlen(a)+strlen(b)])
				a[j]=a[j]-b[j-strlen(a)+strlen(b)]+48;
			else
			{
				a[j]=a[j]-b[j-strlen(a)+strlen(b)]+58;
				a[j-1]--;
			}
			j=0;
			while(a[j]=='0')
				j++;
			for(;j<=strlen(a)-1;j++)
				printf("%c",a[j]);
			printf("\n");
	}
}