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
	int row=0,col=0;
	int a[101][101];
	cin>>row>>col;
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
			cin>>a[i][j];
	for(int i=0;i<col;i++)
	{
		cout<<*(*(a)+i)<<endl;
		for(int j=1;i-j>=0&&j<row;j++)
			cout<<*(*(a+j)+i-j)<<endl;
	}
	for(int i=1;i<row;i++)
	{
		cout<<*(*(a+i)+col-1)<<endl;
		for(int j=1;i+j<row&&j<=col-1;j++)
			cout<<*(*(a+i+j)+col-1-j)<<endl;

	}
	return 0;
}