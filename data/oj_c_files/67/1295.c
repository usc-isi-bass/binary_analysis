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

/*
 * qmfx02.cpp
 *
 *  Created on: 2011-1-1
 *      Author: Administrator
 */
int main()
{
	int n;
	cin>>n;
	double a,b,x;
	cin>>a>>b;
	x=b/a;
	while(n>1)
	{
		cin>>a>>b;
		if(b/a-x>0.05)
		{
			cout<<"better"<<endl;
		}
		if(b/a-x<-0.05)
		{
			cout<<"worse"<<endl;
		}
		if(b/a-x>=-0.05&&b/a-x<=0.05)
		{
			cout<<"same"<<endl;
		}
		n--;
	}
	return 0;
}
