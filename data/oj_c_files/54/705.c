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
	int n1,k,i;
	cin>>n1>>k;
	const int n=n1;
	int a[n+1];
	a[n]=k;
	while(1)
	{    a[n]+=n;
		for(i=n;i>0;i--)
		{
			if(a[i]%(n-1)!=0) break;
			else
			a[i-1]=a[i]/(n-1)*n+k;
		}
	     if(i==1)
	   break;
	}

	cout<<a[1];
	cin.get();	cin.get();	cin.get();
	return 0;
}
