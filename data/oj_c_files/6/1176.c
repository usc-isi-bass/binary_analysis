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
	int k=0;
	cin>>k;
	int m=0,n=0;
	while(cin>>m>>n)
	{
		int result=0;
		int num[100][100]={0};
		int i,j;
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
			cin>>num[i][j];
		for(j=0;j<n;j++)
			result+=num[0][j]+num[m-1][j];
		for(i=1;i<(m-1);i++)
			result+=num[i][0]+num[i][n-1];
		cout<<result<<endl;
	}
	return 0;
}
