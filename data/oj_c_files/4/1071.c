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
	int r,c;
	cin>>r>>c;
	int a[r][c];
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
		{
			cin>>*(*(a+i)+j);
		}
	for(int k=0;k<r+c-1;k++)
	{
		if(k<c)
		{
			for(int i=0;i<r&&k-i>=0;i++)
				cout<<*(*(a+i)+k-i)<<endl;
		}
		else {
			for(int i=c-1;i>=0&&k-i<r;i--)
				cout<<*(*(a+k-i)+i)<<endl;
		}
	}
	return 0;
}