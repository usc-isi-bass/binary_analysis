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
	char c[100],boy,girl;
	int i,j,len,end=0;

	scanf("%s",c);
	len = strlen(c);
	boy = c[0];
	for(i=1;i<len;i++)
	{
		if(c[i]!=boy)
		{
			girl = c[i];
		}
	}


	while(1)
	{
		for(i=0;i<len;i++)
		{
			if(c[i]==boy)
			{
				for(j=i+1;j<len;j++)
				{
					if(c[j]==' ')continue;
					if(c[j]==girl)
					{
						printf("%d %d\n",i,j);
						c[i] = ' ';
						c[j] = ' ';
						i=0;
						break;
					}
					if(c[j]==boy)break;
				}
			}
		}
		for(i=0;i<len;i++)
		{
			if(c[i]==' ')
			{
				end++;
					if(end==len)
					{
						return 0;
					}
			}
			if(i==len-1&&end<len)
			{
				end = 0;
			}
		}
	}
	return 0;

}