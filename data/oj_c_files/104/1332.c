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


int a1(int n)
{
	if (n/2==0)
	return 1;
	else
	return (1+a1(n/2));
}
void search(int a,int b)
{
	if (a1(a)==a1(b))
	{
		if (a/2==b/2&&a/2!=b/2)
		{
			cout<<a/2;
		}
		else if(a==b)
		{
			cout<<a;
		}
		else search(a/2,b/2);
	}
		if (a1(a)>a1(b))
		{
			search(a/2,b);
		}
		if (a1(a)<a1(b))
		{
			search(a,b/2);
		}
}




int main()
{
	int x,y;
	cin>>x>>y;
	search(x,y);


}