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
	int i,j,k,m,n;
	int a[100][100];
	cin>>n>>m;
	for (i=1;i<=n;i++)
	for (j=1;j<=m;j++)
		cin>>a[i][j];
    for (i=1;i<=m+n-1;i++)
		for (j=1;j<=n;j++)
	 {
		 if (i+1-j>0&&i+1-j<=m)//???????? 
		 cout<<*(*(a+j)+i+1-j)<<endl;
	 }
	return 0;
}
