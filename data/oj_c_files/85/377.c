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

//?????
char main()
{
	int i,n,j,f[1000],l[1000];
	char a[20];
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		f[j]=1;
		scanf("%s",a);
		l[j]=strlen(a);
		if(a[0]<65 || (a[0]>90&&a[0]<95) || (a[0]>95&&a[0]<97) || a[0]>122)
		{
			f[j]=0;
		}
		else
		{
			for(i=1;i<l[j];i++)
			{
				if(a[i]=='_'||(a[i]>=48 && a[i]<=57)||(a[i]>=65 && a[i]<=90)||(a[i]>=97 && a[i]<=122))
				{
					f[j]=1;
					
				}
				else
				{
					f[j]=0;
					break;
				}
			}
		}
	}
	for(j=0;j<n;j++)
	{
		if(f[j]==1)
			printf("\nyes");
		else if(f[j]==0)
			printf("\nno");
	}
	return 0;
}