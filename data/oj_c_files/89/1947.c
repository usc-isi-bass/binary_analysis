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

int main ()
{
	int n,a,b,g=0,i;
	int c[100000]={0},d[10000]={0};
	int *p=c,*q=d;
	cin>>n;
	for(;;)
	{
		cin>>a>>b;
		if(a==0&&b==0)
			break;
		else
		{
			c[b]++;
			d[a]=-1;
		}
	}
	for(i=0;i<n;i++)
		if(c[i]==n-1&&d[i]==0)
		{
			cout<<i;
			g=1;
			break;
		}
	if(g==0)
		cout<<"NOT FOUND"<<endl;
	return 0;
}