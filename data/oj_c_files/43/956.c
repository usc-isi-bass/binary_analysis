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

//***************************************************
//1.cpp ??????     ******
//?? ???  1200018209  ********
//?? 2012-10-15 ******
//***************************************************
int main()
{
	int temp,n,i,j,a[10000],k=1;
	a[0]=2;
	cin >> n;
	for(i=3;i<=n;i=i+2)
	{
		temp=sqrt(i);
		for(j=2;j<=temp;j++)
		{
			if(i%j==0)break;
		}
		if(j==temp+1)
		{
			a[k]=i;
			k++;
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=k-1;j>=i;j--)
		{
			if(a[i]+a[j]==n)
			{
				cout << a[i] << " " << a[j] << endl;
			}
		}
	}
	return 0;
}
