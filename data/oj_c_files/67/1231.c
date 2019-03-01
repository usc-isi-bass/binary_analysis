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
	int num;
	cin>>num;
	float a[1000];
	float b[1000],c[1000];
	for(int i=0;i<num;i++)
	{
		cin>>a[i]>>b[i];
		c[i]=b[i]/a[i];
	}
	for(int j=1;j<num;j++)
	{
		if(c[j]-c[0]>0.05)
		{cout<<"better"<<endl;}
		else if(c[0]-c[j]>0.05)
			{cout<<"worse"<<endl;}
		//if(-0.05<=(c[j]-c[0])<=0.05)
		else
		{cout<<"same"<<endl;}
	}
		return 0;
}