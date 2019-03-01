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

int reverse(int n)
{
	int i,a=n,b,j,c=n%10;
	for(i=0;;i++)
	{
		a=a/10;
		if(a/10==0)
		break;
	}
	for(j=0;j<=i;j++)
		c=c*10;
	if(n/10!=0)
	    b=reverse(n/10)+c;
	else
		b=n;
	return b;
}
int main()
{
	int n,b;
	while(cin>>n)
	{
	b=reverse(n);
	cout<<b<<endl;
	}
return 0;
}