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
	int n,r,c,zl[1000][1000],x,a=0,b=0,d=0,e=0;
	cin>>n;
	for(r=0;r<n;r++)
	{
		for(c=0;c<n;c++)
		{
			cin>>zl[r][c];
		}
	}
	for(r=0;r<n;r++)
	{
		for(c=0;c<n;c++)
		{
			if(zl[r][c]==0)
			{
				a=r;
				b=c;
				break;
			}
		}
		if(zl[a][b]==0)
		{
			break;
		}
	}
	for(r=0;r<n;r++)
	{
		for(c=0;c<n;c++)
		{
			if(zl[r][c]==0)
			{
				d=r;
				e=c;
			}
		}
	}
	x=(d-a-1)*(e-b-1);
	cout<<x<<endl;
	return 0;
}