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
	int a[7]={0,100,50,20,10,5,1},b[7]={0};
	int q,i;
	cin>>q;
	for (i=1;i<=6;i++)
	{
		if( q>=a[i])
		{	
			b[i]=q/a[i];
			q=q%a[i];
		}
	}
	for (i=1;i<=6;i++)
	{
		cout<<b[i]<<endl;
	}
	return 0;
}
