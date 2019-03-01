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

void f(int i,int n,char a[][500])
{
	if(i>1)
		f(i-1,n,a);
	int x=0,y=0;
	for(x=0;x<n;x++)
	{
		for(y=0;y<n;y++)
		{
			if(a[x][y]=='@')
			{
				if(a[x-1][y]=='.')
					a[x-1][y]='$';
				if(a[x+1][y]=='.')
					a[x+1][y]='$';					
				if(a[x][y-1]=='.')
					a[x][y-1]='$';					
				if(a[x][y+1]=='.')
					a[x][y+1]='$';
			}
		}
	}
	for(x=0;x<n;x++)
		for(y=0;y<n;y++)
			if(a[x][y]=='$')
				a[x][y]='@';
}
int main()
{
	int n=0,m=0,x=0,y=0,sum=0;
	cin>>n;
	char a[500][500]={0},b;
	b=getchar();
	for(x=0;x<n;x++)
	{
		for(y=0;;y++)
		{
			a[x][y]=getchar(); 	
			if(a[x][y]=='\n')
				break;
		}

	}
	cin>>m;
	f(m-1,n,a);
	for(x=0;x<n;x++)
		for(y=0;y<n;y++)
			if(a[x][y]=='@')
				sum++;
	cout<<sum;
	return 0;
}