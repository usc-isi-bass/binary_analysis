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
	char c,a[50][50];
	int i=0,j;
	while(cin>>a[i])
	{
		i++;
	}
	for(j=i-1;j>0;j--)
	{
		cout<<a[j]<<" ";
	}
	cout<<a[0];
	return 0;
}

