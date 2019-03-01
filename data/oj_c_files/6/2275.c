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
	int a[100][100],m,n,k;
	cin>>k;
	int i=0,j=0,h=0;
	for(i=0;i<k;i++)
	{
		int b=0;
		cin>>m>>n;
		for(j=0;j<m;j++)
			for(h=0;h<n;h++)
				cin>>*(*(a+j)+h);
		for(j=0;j<m;j++)
			b=b+**(a+j);
		for(j=1;j<n;j++)
			b=b+*(*a+j);
		for(j=1;j<m;j++)
			b=b+*(*(a+j)+n-1);
		for(j=1;j<n-1;j++)
			b=b+*(*(a+m-1)+j);
		cout<<b<<endl;

	}
	return 0;

}