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
	int L,R,i,j,k;
	cin>>R>>L;
	const int l=L;
	const int r=R;
	int a[r][l];
	for(i=0;i<r;i++)
		for(j=0;j<l;j++)
			cin>>a[i][j];
	for(k=0;k<l;k++)
	{
		for(i=0;(i<r)&&((k-i)>=0);i++)
				{
					cout<<a[i][k-i]<<endl;
				}
	}
	for(k=l;k<=l+r-2;k++)
	{
		for(i=l-1;(i>=0)&&((k-i)<r);i--)
					{
						cout<<a[k-i][i]<<endl;
					}

}
}