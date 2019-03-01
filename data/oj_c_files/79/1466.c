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
	int m,n,i,j=0,f[300],a[100];
	f[1]=0;
		while (cin>>n>>m)
		{
			if (n==0&&m==0)
				break;
			j++;
			for(i=2;i<=n;i++)
				f[i]=(f[i-1]+m)%i;
			a[j]=f[n]+1;

		}
		for(i=1;i<=j;i++)
			cout<<a[i]<<endl;
	return 0;
}