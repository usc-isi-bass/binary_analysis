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
	int n,a,b,t=0,m=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b;
		if( (a-90)*(a-140)<=0 &&(b-60)*(b-90)<=0 )
		 t+=1;
		else t=0;
		if( t>m ) m=t;
	}
	cout<<m<<endl;

	return 0;
}
