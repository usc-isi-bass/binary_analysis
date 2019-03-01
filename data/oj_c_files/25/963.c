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
	int n,flag =0;
	cin >> n;
	int a[100] ={0};
	a[0] = 1;
	int i,j;
	for (i = 1;i <=n; i++)
	{
		for(j =0;j<=99;j++)
			a[j] = a[j]*2;
		for(j = 0; j<=99;j++)
		{
			if (a[j] >=10)
			{
				a[j+1] = a[j+1]+(a[j]-a[j]%10)/10;
				a[j] = a[j]%10;
			}
		}
	}
	for(i =99; i>=0;i--)
	{
		if(a[i]!=0 ||flag)
		{
			flag =1;
			cout <<a[i];
		}
	}
	return 0;
}