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
	int n, count = 0, j = 1, l;
	char a[41];
	cin >> n;
	for ( int i=1;i<=n;i++)
	{
		cin>>a;
		l=strlen(a);
		count=count+l;
		if(count<80&&count!=l)
		{
			cout<<" "<<a;
			count++;
		}
		else if(count<80&&count==l)
		{
			cout<<endl<<a;
		}
		
		else
		{
			cout<<endl;
			cout<<a;
			count=l;
		}
	}
	return 0;
}
	