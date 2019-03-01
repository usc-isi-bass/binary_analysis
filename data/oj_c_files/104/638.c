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
	int x,y,nx,ny,i,j,k,ax[20]={0},ay[20]={0};
	cin>>x>>y;
	if(x==y)
	{
		cout<<x;
		return 0;
	}
	nx=1;
	while(x>0)
	{
		ax[nx]=x;
		x/=2;
		nx++;
	}
	nx--;
	ny=1;
	while(y>0)
	{
		ay[ny]=y;
		y/=2;
		ny++;
	}
	ny--;
	for(i=nx+ny; ;i--)
		if(ax[i-ny]!=ay[i-nx])
		{
			cout<<ax[i+1-ny];
			return 0;
		}
}