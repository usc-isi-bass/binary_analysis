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
	float x,y,z,t,s;//z?????? t??????s?x?y??
	cin>>n;
	cin>>z>>t;
	x=t/z;
	for(i=1;i<n;i++)
	{
		cin>>z>>t;
		y=t/z;
		s=x-y;
		if(fabs(s)<=0.05) cout<<"same"<<endl;
		else {
			if(s>0.05) cout<<"worse"<<endl;
		    else cout<<"better"<<endl;
	         }
	}
	return 0;
}
