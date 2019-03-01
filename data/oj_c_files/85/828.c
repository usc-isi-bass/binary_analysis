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
	int i,b,n,l,m;
	char a[21];
	scanf("%d",&n);
	for(b=0;b<n;b++)
	{
		scanf("%s",a);
		l=strlen(a);
		for(i=0;i<l;i++)
		{
			m=(int)(a[i]);
			if(i==0)
			{
				if((m>=65&&m<=90)||(m>=97&&m<=122) || a[i]=='_')
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
				if((m>=65&&m<=90)||(m>=97&&m<=122) || (a[i]=='_')||(m>=48&&m<=57))
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
