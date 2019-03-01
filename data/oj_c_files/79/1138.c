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
	int i,j,num,king,check[350]={0},m,n,count=0;
	for(;;)
	{
		cin>>n>>m;
		if(m==0&&n==0)
			break;
		for(i=1;i<320;i++)
			check[i]=1;
		count=0;
		for(i=1;;i++)
		{
			if(i==n+1)
				i=1;
			if(check[i]==1)
				count++;
			else
				continue;
			if(count==m)
			{
				count=0;
				check[i]=0;
			}
			for(j=1;j<=n;j++)
			{
				if(check[j]==1)
				{
					num++;
					king=j;
				}
			}
			if(num==1)
			{
				cout<<king<<endl;
				break;
			}
			num=0;
		}
	}
	return 0;
}