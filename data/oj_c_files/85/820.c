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
	int i,j,n,l;
	char a[21];
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%s",a);
		l=strlen(a);
		for(i=0;i<l;i++)
		{
			if(i==0)
			{
				if(a[i]>=65&&a[i]<=90||a[i]>=97&&a[i]<=122||a[i]=='_')
				{
					continue;
				}
				else
				{
					break;
				}
			}
			if(i!=0)
			{
				if(a[i]>=65&&a[i]<=90||a[i]>=97&&a[i]<=122||a[i]=='_'||a[i]>=48&&a[i]<=57)
				{
					continue;
				}
				else
				{
					break;
				}
			}
		}
	    if(i==l)
		{
		    printf("yes\n");
		}
	    else
		{
		    printf("no\n");
		}
	}
}
			
