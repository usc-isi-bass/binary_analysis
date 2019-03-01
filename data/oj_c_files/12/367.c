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

/*
 * ???: 1000010191_32_9.cpp
 * ??: ???
 * ????: 2010-11-12
 * ??: ??
 */


int main()
{
	int a[17]; //??
	int n,s; //??????????

	while (cin>>a[1],a[1]!=-1)
	{
		n=1;
		s=0;
		while (cin>>a[n+1],a[n+1]!=0) n++;
		for (int i=1;i<=n;i++)
			for (int j=1;j<=n;j++)
				if (a[i]%a[j]==0&&a[i]/a[j]==2)
					s++;
		cout<<s<<endl;
	}
	return 0;
}
