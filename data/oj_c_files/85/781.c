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
	int n,i,len,j,e;
	char name[LEN];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		e=1;
		scanf("%s",name);
		len=strlen(name);
		if(name[0]!='_'&&isalpha(name[0])==0)
		{
			printf("no\n");
		}
		else
		{
			for(j=1;j<len;j++)
			{
				if(name[j]=='_'||(name[j]<58&&name[j]>47)||isalpha(name[j]))
				{
					e=1;
				}
				else
				{
					e=0;
					break;
				}
			}
			if(e==1)
			{
				printf("yes\n");
			}
			else
			{
				printf("no\n");
			}
		}
	}
	return 0;
}