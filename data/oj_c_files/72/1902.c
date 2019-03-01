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

int a[25][25];
int main()
{
	int m,n,i,j;
	cin>>m>>n;
	for(i=0;i<m;i++)
	 for(j=0;j<n;j++)
		cin>>a[i][j];
	for(i=0;i<m;i++)
	 for(j=0;j<n;j++)
	  {
		if((i-1<0||a[i][j]>=a[i-1][j])&&
		(j-1<0||a[i][j]>=a[i][j-1])&&
		(i+1>=m||a[i][j]>=a[i+1][j])&&
		(j+1>=n||a[i][j]>=a[i][j+1]))
		 cout<<i<<' '<<j<<endl;
	  }
	return 0;
}