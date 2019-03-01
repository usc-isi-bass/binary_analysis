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
	int n,j;
	cin>>n;
	int a[n];
	int i=0;
	while (i<n)
	{
		cin>>a[i];
		i++;
	}
	cout<<a[0];
	i=1;
	while(i<n)
	{

		for(j=0;j<i;j++)
			if (a[i]==a[j]) break;
		if (((j==i)&&(a[i]!=a[i-1]))==1) cout<<" "<<a[i];
		i++;
	}
	return 0;

}