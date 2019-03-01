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
	char a[85];
	int i,j,k,m;
	scanf("%d\n",&k);
	for(i=0;i<k;i++)
	{
		m=1;
		gets(a);
		if((a[0]>='a' && a[0]<='z') || (a[0]<='Z' && a[0]>='A') || a[0]=='_')
		{
			for(j=1;a[j]!='\0';j++)
			{
				if((a[j]>='a' && a[j]<='z') || (a[j]<='Z' && a[j]>='A') || a[j]=='_' || (a[j]>='0' && a[j]<='9'))
					continue;
				else
				{
					m=0;
					break;
				}
			}
		}
		else
			m=0;
		printf("%d\n",m);
	}
}		
	

