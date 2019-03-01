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
	int a[101],i,m,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	}
	m=i;
	for(i=m-1;i>0;i--)
	{
		cout<<a[i]<<" ";
	}cout<<a[0];
			 	cin.get();cin.get();cin.get();
	return 0;
	}
	