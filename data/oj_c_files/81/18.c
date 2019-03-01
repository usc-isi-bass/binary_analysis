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
	int a[6][6],i,j,b,c,d,e;
	for(i=1;i<=5;i++)
		for(j=1;j<=5;j++)
			cin>>a[i][j];
	cin>>b>>c;
	if(b>=0&&b<=4&&c>=0&&c<=4)
	{
		b++;
		c++;
		for(i=1;i<=5;i++)
		{
			d=a[b][i];
			a[b][i]=a[c][i];
			a[c][i]=d;
		}
		for(i=1;i<=5;i++)
		{
			for(j=1;j<=5;j++)
			{
                               cout<<a[i][j];
                               if(j<5)cout<<' ';
}
			cout<<endl;
		}
	}
	else cout<<"error"<<endl;
    return 0;
}