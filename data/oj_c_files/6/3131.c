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
	int k,m,n;
	int a[100][100];
	cin>>k;
	while(k--)
	{
		cin>>m>>n;
		if(m==1&&n==1)
		{	int k;
		cin>>k;
		cout<<k;}
		else{
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				cin>>a[i][j];
		int sum=0;
		for(int j=0;j<n;j++)
			sum+=*(*(a)+j)+*(*(a+m-1)+j);
		for(int i=1;i<m-1;i++)
		   sum+=*(*(a+i))+*(*(a+i)+n-1);
		cout<<sum<<endl;
	}
	}
	return 0;
}