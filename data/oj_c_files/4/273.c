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
	int s[100][100],l,h,i,j,hang,lie;
	scanf("%d%d",&lie,&hang);
	for(l=0;l<lie;l++)
	{
		for(h=0;h<hang;h++)
		{
			scanf("%d",&s[h][l]);
		}
	}
	for(i=0;i<hang+lie-1;i++)
	{
		for(j=i;j>=0;j--)
		{
			if(j>hang-1)
			{
				j=hang-1;
			}
			h=j;
			l=i-h;
			if(l>lie-1)
			{
				break;
			}
			printf("%d\n",s[h][l]);
		}
	}
	return 0;
}
