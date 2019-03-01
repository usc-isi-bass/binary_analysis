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

int main(int argc, char* argv[])
{
	int n, y[200], m1[200], m2[200], i, j, x[12], s;
	scanf("%d", &n);
	for (i=0;i<n;i++)
	{
		scanf("%d%d%d", &y[i], &m1[i], &m2[i]);
	}
	x[1]=31;
	x[3]=31;
	x[4]=30;
	x[5]=31;
	x[6]=30;
	x[7]=31;
	x[8]=31;
	x[9]=30;
	x[10]=31;
	x[11]=30;
	x[12]=31;
    for (i=0;i<n;i++)
	{
		s=0;
		if (y[i]%400==0||(y[i]%4==0&&y[i]%100!=0))
		{
			x[2]=29;
		}
		else x[2]=28;
		if (m1[i]<m2[i])
		{
			for (j=m1[i];j<m2[i];j++)
			{
				s=s+x[j];
			}
			if (s%7==0)
			{
				printf("YES\n");
			}
			else printf("NO\n");
		}
		else 
		{
			for (j=m2[i];j<m1[i];j++)
			{
				s=s+x[j];
			}
			if (s%7==0)
		{
			printf("YES\n");
		}
		else printf("NO\n");
		}
	}
	return 0;
}