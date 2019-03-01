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
	int i=0,n=0,j;
	int a[1000],b[1000],c[1001];
	char comma;
	int max=0;
	
	memset(c,0,sizeof(c));

	while (cin>>a[n++])
	{
		comma=getchar();
		if (comma!=',') break;
	}

	for (i=0;i<n;i++)
	{
		cin>>b[i];
		if (i<n-1) getchar();

		for (j=a[i];j<b[i];j++)
		{
			c[j]++;
			if (c[j]>max) max=c[j];
		}
	}

	cout<<n<<" "<<max<<endl;;

	return 0;


}