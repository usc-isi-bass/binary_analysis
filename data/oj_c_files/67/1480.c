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
	int n,x0,y0,x,y;
	double k;
	cin>>n;
	cin>>x0>>y0;
	k=(double)y0/x0;
	for(n;n>=2;n--)
	{
		cin>>x>>y;
		if((double)y/x>k+0.05)
			cout<<"better"<<endl;
		else if((double)y/x<k-0.05)
			cout<<"worse"<<endl;
		else
			cout<<"same"<<endl;
	}
	return 0;
}