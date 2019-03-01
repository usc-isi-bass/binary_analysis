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
	int i,j,k,row,col,a[100][100];
	cin>>row>>col;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>a[i][j];
		}
	}
	for(k=0;k<col;k++)
		for(i=0,j=k;j>=0&&i<row;i++,j--)
			cout<<a[i][j]<<endl;
	for(k=1;k<row;k++)
		for(i=k,j=col-1;i<row&&j>=0;i++,j--)
			cout<<a[i][j]<<endl;
	return 0;
}