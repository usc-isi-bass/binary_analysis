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
	int i,j,n,m,k,sum;
	int a[100][100];
	cin >> k;
	while(k>0)
	{
		sum=0;
		k--;
		cin>>m>>n;
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				cin >> *(*(a+i)+j);
		for(j=0;j<n;j++)
		{
			if(m==1)
				sum+=*(*a+j);
			else
			    sum+=*(*a+j)+*(*(a+m-1)+j);
		}
		for(i=1;i<m-1;i++)
			sum+=a[i][0]+a[i][n-1];
		cout << sum << endl;
	}
	return 0;
}