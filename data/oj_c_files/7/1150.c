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
	char st[256],sub[256],rep[256];
	scanf("%s%s%s",st,sub,rep);
	int lenst,lensub,i,j;
	lenst=strlen(st);
	lensub=strlen(sub);
	for(i=0;i<=lenst-lensub;i++)
	{
		int count=0;
		if(lensub!=1)
		{
			if(st[i]==sub[0])
			{
				
				for(j=i+1;j<i+lensub;j++)
				{
					if(st[j]!=sub[j-i])
						break;
					count++;
				}
			}
			if(count==lensub-1)
			{
				for(j=i;j<i+lensub;j++)
				{
					st[j]=rep[j-i];
				}
				break;
			}
		}
		else
		{
			if(st[i]==sub[0])
			{
				st[i]=rep[0];
				break;
			}
		}
	}
	printf("%s",st);
}
