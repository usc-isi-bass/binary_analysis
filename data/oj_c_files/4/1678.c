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


int main(int argc,char *argv[])
{
	int a[100][100];
	int row,col,i,j,k;
	cin>>row>>col;
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			cin>>a[i][j];
	for(k=0;k<=col-1;k++)
		for(i=0,j=k-i;i<=row-1 && j>=0;i++,j--)
			cout<<a[i][j]<<endl;
	for(k=col;k<=row+col-2;k++)
		for(j=col-1,i=k-j;i<=row-1 && j>=0;i++,j--)
			cout<<a[i][j]<<endl;
	return 0;
}

	
