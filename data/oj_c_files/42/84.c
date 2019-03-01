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
	int n,i,j,k,m,b,c,d,e,f,x;
	cin >> n;             
	int a[1000000];
	for(i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	cin >> x;      
	k = 0;
	for(j = 1;j <= n,k < 1;j++)
	{
		if(a[j] != x)
		{
			cout<< a[j];
			k++;
		}
	}
	for(m = j;m <= n;m++)
		if(a[m] != x)
			cout << " " <<a[m];
	return 0;
}