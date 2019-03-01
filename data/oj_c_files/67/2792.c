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
	int n;
	cin>>n;
	float s[100],d,a,b;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		s[i]=b/a;
		if(i>0)
		{
			d=s[i]-s[0];
			if(d<-0.05)
				cout<<"worse";
			else if(d>0.05)
				cout<<"better";
			else
				cout<<"same";
			cout<<endl;
		}
	}
}