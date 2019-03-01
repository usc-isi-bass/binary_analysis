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
	int n,i;
	double a,b,c;
	cin>>n;
	cin>>a>>b;
	c=b/a;
	for(i=0;i<n-1;i++)
	{
		cin>>a>>b;
		if(b/a-c>0.05)
			cout<<"better"<<endl;
		if(b/a-c<-0.05)
			cout<<"worse"<<endl;
		if(b/a-c>=-0.05&&b/a-c<=0.05)
			cout<<"same"<<endl;
	}
	return 0;
}