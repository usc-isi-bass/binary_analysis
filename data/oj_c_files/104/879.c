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
	int x,y,a[10],b[10],i,j,max;
	cin>>x>>y;
	a[0]=x;
	b[0]=y;
	for(i=1;i<10;i++)
		{
			a[i]=a[i-1]/2;
			b[i]=b[i-1]/2;
		}
	for(i=9;i>=0;i--)
		for(j=0;j<10;j++)
		{
			if(a[i]==b[j])
				max=a[i];
		}
		cout<<max<<endl;
	return 0;
}

