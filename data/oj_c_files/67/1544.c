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

//?? 2011 11.5
//?? ???
//?? ???????

int main()
{
	int n;
	int i;
	double standard;
	double result;
	float a[100][2];
	cin>>n;
	for(i=0;i<=n-1;i++)
	{
		cin>>a[i][0]>>a[i][1];
	}
	standard=a[0][1]/a[0][0];
	for(i=1;i<=n-1;i++)
	{
		result=a[i][1]/a[i][0];
		if((result-standard)>0.05)
			cout<<"better"<<endl;
		 else if((standard-result)>0.05)
			       cout<<"worse"<<endl;
		      else
			        cout<<"same"<<endl;
	}
	return 0;



}