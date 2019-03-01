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
	int n,k,apple,m,i;
	cin>>n>>k;
	apple=k;
	do
	{
		apple+=n;
		m=apple;
		for(i=n-1;i>=1;i--)
			if(m%(n-1)==0)
				m=m*n/(n-1)+k;
			else
				break;
	}
	while(i>=1);
	cout<<m;
	return 0;
}