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

int power(int x)
{
	int k,y=1;
	for(k=1;k<=x;k++)
		y=y*10;
	return y;
}

int main()
{
	int n,i,j,a[6],temp;
	cin>>n;
	for(i=1;i<=5;i++)
		if(n%power(i)==n)
		{
			j=i;
			break;
		}
	i=0;
	for(i=0;i<j;i++)
	{
		a[i]=n%10;
		n=n/10;
		cout<<a[i];
	}
	return 0;
}