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

int back(int a)
{
	int b=abs(a),m=0,r=0;
	int i=0;
	if(a<0)
	{
		a=-a;
		r=1;
	}
	while(b>0)
	{
		b/=10;
		i++;
	}
	while(a>0)
	{
		i--;
		m=a%10;
		b+=m*pow((double)10,(double)i);
		a/=10;
	}
	if(r==1)
		b=-b;
	return b;
}
int main()
{
	int a;
	for(int i=1;i<=6;i++)
	{
		cin>>a;
		cout<<back(a)<<endl;
	}
	return 0;
}