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
int n,a,r=1,b,c,d,z,temp;
cin>>n;
for(r=1;r<=n;r++)
{
	cin>>a;
	b=c=1;
	for(temp=1;temp<=a;temp++)
	{
	z=b;
	d=b+c;
	b=c;
	c=d;
	}
	cout<<z<<endl;
}

return 0;
}

