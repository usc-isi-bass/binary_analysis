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
	int i,j,n,b[10000],len;
	char a[21];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		b[i]=0;
	for(i=0;i<n;i++)
	{
		scanf("%s",a);
		len=strlen(a);
		if(a[0]>='a'&&a[0]<='z'||a[0]=='_'||a[0]<='Z'&&a[0]>='A')
		{
			for(j=1;j<len;j++)
			{
				if(a[j]>='a'&&a[j]<='z'||a[j]=='_'||a[j]<='Z'&&a[j]>='A'||a[j]>='0'&&a[j]<='9')
				{
					b[i]=1;
				}
				else
				{
					b[i]=0;
					break;
				}
			}
		}
		else
			b[i]=0;
	}
	for(i=0;i<n;i++)
	{
		if(b[i]==1)
			printf("yes\n");
		else
			printf("no\n");
	}
}