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
	char c[100];
	int boy[100]={0},girl[100]={0};
	int i,j,k=0,r;
    scanf("%s",c);
	r=strlen(c);
	for(i=0;i<r;i++)
	{
		if(c[i]!=c[0])
		{
			girl[k]=i;
            for(j=i-1;j>=0;j--)
			{
				if(c[j]==c[0])
				{
					boy[k]=j;
					break;
				}
			}
			c[j]='0';
			k++;
		}
	}
	for(i=0;i<k;i++)
		printf("%d %d\n",boy[i],girl[i]);
}
