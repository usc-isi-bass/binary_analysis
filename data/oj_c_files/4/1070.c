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
{	int i,j,m,n;
	cin>>m>>n;
	int a[m+1][n+1];
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			cin>>a[i][j];
	int k;



	for(k=1;k<=n;k++)
		for(i=k;(i>=1)&&(k+1-i<=m);i--)
			cout<<a[k+1-i][i]<<endl;



	for(k=2;k<=m;k++)
		for(i=n;(i>=1)&&(k+n-i<=m);i--)
			cout<<a[k+n-i][i]<<endl;
return 0;

}