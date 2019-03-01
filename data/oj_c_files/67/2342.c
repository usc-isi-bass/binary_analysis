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
	int n,i=0;
	double x,y,a=0,b=0;
	cin>>n;
	for(i=1;i<=1;i++)//??????
	{
		cin>>x>>y;
		a=y/x;//??????????
	}
	for(i=2;i<=n;i++)//??????
	{
		cin>>x>>y;
		b=y/x;
		if(b-a>0.05)//??????????
			cout<<"better"<<endl;
		else if (a-b>0.05)//??????????
			cout<<"worse"<<endl;
		else cout<<"same"<<endl;//????
	}
		return 0;
}

