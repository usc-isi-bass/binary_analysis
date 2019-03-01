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

int a[100][100],m,n;

int high(int x,int y)
{
	if(x!=0 && a[x-1][y]>a[x][y]) return 0;
	if(y!=0 && a[x][y-1]>a[x][y]) return 0;
	if(x!=m && a[x+1][y]>a[x][y]) return 0;
	if(y!=n && a[x][y+1]>a[x][y]) return 0;
	return 1;
}

int main()
{
	int i,j;

	cin>>m>>n;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(high(i,j)==1)
				cout<<i<<' '<<j<<endl;
	return 0;
}