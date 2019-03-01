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

//***********************************************************
//??????
//????????
//***********************************************************
int main()
{
	int n;
	cin>>n;
	double a,b;
	double x,y;
	cin>>a>>b;
	x=b/a;
	for(int i=2;i<=n;i++)
	{
		cin>>a>>b;
		y=b/a;
		if((y-x)>0.05&&(!(fabs(y-x-0.05)<1e-8)))
			cout<<"better"<<endl;
		else if(x-y>0.05&&(!(fabs(x-y-0.05)<1e-8)))
			cout<<"worse"<<endl;
		else cout<<"same"<<endl;
	}
	return 0;
}