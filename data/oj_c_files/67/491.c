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
	double i,n,p,q;
	cin>>n;
	for(i=0;i<n;i++)
	{
		double x,y;
		cin>>x>>y;
		if(i==0)
		{
			p=y/x;
			continue;
		}
		q=y/x;
		if(p>=q)
		{
			if(p-q>0.05)
				cout<<"worse"<<endl;
			else
				cout<<"same"<<endl;
		}
		else
		{
			if(q-p>0.05)
				cout<<"better"<<endl;
			else
				cout<<"same"<<endl;
		}
	}
	return 0;
}