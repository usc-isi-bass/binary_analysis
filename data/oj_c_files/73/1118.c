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
	int s[5][5],i,k,a=0,b=0,h,j;
	for(i=0;i<5;i++)
	{
		for(k=0;k<5;k++)
		{
			scanf("%d",&(s[i][k]));
		}
	}
	for(k=0,a=0;k<5;k++)
	{
		for(i=0;i<5;i++)
		{
			if((s[i][k]<=s[0][k])&&(s[i][k]<=s[1][k])&&(s[i][k]<=s[2][k])&&(s[i][k]<=s[3][k])&&(s[i][k]<=s[4][k]))
			{
				break;
			}
		}
		if((s[i][k]>=s[i][0])&&(s[i][k]>=s[i][1])&&(s[i][k]>=s[i][2])&&(s[i][k]>=s[i][3])&&(s[i][k]>=s[i][4]))
		{
			a++;
			h=i+1;
			j=k+1;
			printf("%d %d %d",h,j,s[i][k]);
		}
	}
	if(a==0)
	{
		printf("not found");
	}
	return 0;
}

