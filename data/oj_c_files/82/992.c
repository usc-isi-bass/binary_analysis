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
	int i,n,a,b,x=0,hour=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a>>b;
		if(a>=90&&a<=140&&b>=60&&b<=90)
		{x=x+1;
		if(x>hour)
			hour=x;}
		     else x=0;
	}
	cout<<hour<<endl;
	return 0;
}

