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


int feibonaqi(int n1);
int main()
{
	double sum = 0;
	int i, j;
	int m;
	int a[100];
	
	scanf("%d", &m);
	for(i = 0; i < m; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i = 0; i < m; i++)
	{
		sum = 0;
		if(a[i] == 1)
		{
			sum = 2.000;
			printf("%.3lf\n", sum);
		}
		else
		{
			for(j = 1; j <= a[i]; j++)
				sum += (feibonaqi(j+1)*1.0)/feibonaqi(j);
			printf("%.3lf\n", sum);
		}
	}
	
	return 0;
}

int feibonaqi(int n1)
{
	int k;
	int f[100];
	
	f[0] = 1;
	f[1] = 2;
	for(k = 2; k < n1; k++)
	{
		f[k] = f[k-1] + f[k-2];
		
	}
	
	return f[n1-1];
	
}
