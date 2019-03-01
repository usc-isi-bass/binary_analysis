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
	int a[100],b[100];
	int x,y,i=0,j=0,n1,n2;
	cin>>x>>y;
	while(x>=1)
	{
		a[i]=x;
		x=x/2;
		i=i+1;
	}
	n1=i;
	while(y>=1)
	{
		b[j]=y;
		y=y/2;
		j=j+1;
	}
	n2=j;
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{	
			if(a[i]==b[j])
			{
				cout<<a[i]<<endl;
				goto loop;
			}
		}
	}
loop:return 0;
}
