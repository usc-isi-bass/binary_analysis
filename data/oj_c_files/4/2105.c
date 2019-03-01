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
	int n,m;
	int a[110][110];
	cin>>n>>m;
	for (int i=0;i<n;i++)
		for (int j=0;j<m;j++)
			cin>>a[i][j];
	for (int j=0;j<m+n-1;j++)
		for (int i=max(0,j-m+1);i<min(n,j+1);i++)
			cout<<a[i][j-i]<<endl;
	return 0;
}