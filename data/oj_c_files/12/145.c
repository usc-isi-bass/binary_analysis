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
	int str[20],doubl,num=0,a,b,c;
	while(1)
	{
		num=0;
		scanf("%d",&str[0]);
		if(str[0]==-1)
			break;
		else
			for(a=1;str[a-1]!=0;a++)
			{
				scanf("%d",&str[a]);
			}
			for(b=0;b<a-1;b++)
			{
				doubl=2*str[b];
				for(c=0;c<a-1;c++)
				{
					if(str[c]==doubl)
						num++;
					else
						num=num;
					}
				}
				printf("%d\n",num);
			}
			return 1;
	}