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

int main(){
	int a[100][100];
	int row,col;
	int i,j;
	int (*p)[100]=a;
	cin>>row>>col;
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			cin>>*(*(p+i)+j);
	for(i=0;i<=row+col-2;i++)
	{
		if(i<col-1)
			for(j=0;j<=row-1&&j<=i;j++)cout<<*(*(p+j)+i-j)<<endl;
		else for(j=col-1;i-j<=row-1&&j>=0;j--)cout<<*(*(p+i-j)+j)<<endl;
	}
	return 0;
}