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
	int a[100][100];
	int row=0,col=0;
	cin>>row>>col;
	int (*p)[100]=a;

	//cout<<*(p[0]+2)<<endl;
	int i,j;
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			cin>>*(p[i]+j);
	for(i=0;i<row+col-1;i++)
		for(j=0;j<row;j++)
		{
			if(i-j>=0 && i-j<col)
				cout<<*(p[j]+i-j)<<endl;
		}
	return 0;
}
