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

int main ()
{
	int n, i;          //n??????
	double a[10000][2];      //???????????? 
	double x, y;
	cin>>n;
	for(i=0; i<n; i++)
		cin>> a[i][0] >> a[i][1]; //????
    x = a[0][1]/a[0][0];
	for(i=1; i<n; i++)
	{
		y = a[i][1]/a[i][0];
		if(y-x>0.05)
		{
			cout<<"better"<<endl;
	    }
		else if(x-y>0.05)
		{
			cout<<"worse"<<endl;
		}
		else
		{
			cout<<"same"<<endl;
		}
	}
	return 0;
}