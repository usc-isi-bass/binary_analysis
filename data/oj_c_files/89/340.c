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

int k[10000][10000];
int main()
{
	int n,x,y,flag,i,j,pre;
	for(i=0;i<1000;i++)
	{
		for(j=0;j<1000;j++)
		{
			k[i][j]=0;
		}
	}
	cin>>n;
	while((cin>>x>>y)&&(x!=0||y!=0))
	{
		k[x][y]=1;
	}
	pre=0;
	for(i=1;i<n;i++)
	{
		if(k[pre][i]==1)
			pre=i;
	}
	flag=1;
	for(i=0;i<n;i++)
	{
		if(i!=pre)
		{
			if(k[pre][i]==1)
			{
				flag=0;
				break;
			}
		}
	}
	if(flag==0)
		cout<<"NOT FOUND"<<endl;
	else
		cout<<pre<<endl;
	return 0;
}
