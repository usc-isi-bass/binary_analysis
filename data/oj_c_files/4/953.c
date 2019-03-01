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
	int row,col,a[101][101];
	cin>>row>>col;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
			cin>>a[i][j];
	}
	for(int n=0;n<col;n++)
	{
		for(int i=0,j=n;j>=0&&i<row;i++,j--)
			cout<<a[i][j]<<endl;;
	}
	for(int n=1;n<row;n++)
	{
		for(int i=n,j=col-1;i<row&&j>=0;i++,j--)
			cout<<a[i][j]<<endl;
	}


	return 0;
}