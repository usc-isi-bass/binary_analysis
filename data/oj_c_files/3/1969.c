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

int main ()
{
	int n,k,judge=0;							//?judge?1?0????????k?????
	cin>>n>>k;
	int a[1000];
	for (int i=0;i<n;i++)						//????
		cin>>a[i];
	for (int i=0;judge==0&&i<n-1;i++)			//???????????????????????????k
	{
		for(int j=i+1;j<n;j++)
		{
			if (a[i]+a[j]==k)					//?????????k???judge???1
				judge=1;
		}
	}
	if (judge==1)								//??judge?1??????????k????yes
		cout<<"yes";
	if (judge==0)								//????no
		cout<<"no";
	return 0;
}