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

char a[101][101];
int n,k;
int num=0;
int b[101][101];
int search()
{
	int i,j;
	for(i=0;i<n;i++)
	{for(j=0;j<n;j++)
		if((b[i-1][j]==2||b[i+1][j]==2||b[i][j-1]==2||b[i][j+1]==2)&&b[i][j]==0)
		{b[i][j]=1;num=num+1;}}
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(b[i][j]==1)
				b[i][j]=2;
			
			return 0;
}
int main()
{
	
	cin>>n;
	int i,j,l;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
			if(a[i][j]=='.')
				b[i][j]=0;
			else if(a[i][j]=='@')
			{b[i][j]=2;num=num+1;}
			else if(a[i][j]=='#')
				b[i][j]=-1;
		}
	cin>>k;
	for(l=0;l<k-1;l++)
		search();
	cout<<num<<endl;
return 0;
}