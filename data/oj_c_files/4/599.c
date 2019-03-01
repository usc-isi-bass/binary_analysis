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


int main( )
{
	int a[101][101];
	int row,col;

	int i,j;

	cin>>row>>col;

	for (i=0;i<row;i++)
		for (j=0;j<col;j++)
			cin>>a[i][j];

	for (i=0;i<col;i++)
		for (j=i;j>=0 && i-j<row;j--)
			cout<<a[i-j][j]<<endl; //????i+0?j?????i-j?????j?i??????j--

	for (i=1;i<row;i++)
		for (j=col-1;(j>=0) && (i+col-1-j <row) ;j--)
			cout<<a[i+col-1-j][j]<<endl;//????i+col-1?j????,i+col-1-j?????j??col-1??????j--


	return 0;
}