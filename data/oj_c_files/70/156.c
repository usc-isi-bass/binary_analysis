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
	int n,i,j;
    scanf("%d",&n);
	double num[10][2]={0},a=0,b,dis;
	for(i=0;i<n;i++)
	{
		scanf("%lf %lf",&num[i][0],&num[i][1]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			b=sqrt((num[j][0]-num[i][0])*(num[j][0]-num[i][0])+
				(num[j][1]-num[i][1])*(num[j][1]-num[i][1]));
			if(b<a)
			{
				dis=a;
			}
			if(b>=a)
			{
				dis=b;
				a=b;
			}

		}
	}
	printf("%.4f",dis);
	return 0;
}
