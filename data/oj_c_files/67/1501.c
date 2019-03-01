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
	int n,i,a,b,t,s;
	float x,y;
	cin>>n;
	cin>>a>>b;
	x=b*1.0/a;
	for (i=1;i<=n-1;i++)
	{cin>>t>>s;
	  y= s*1.0/t;
	  if (y-x>0.05) cout<<"better"<<endl;
	  if (x-y>0.05) cout<<"worse"<<endl;
	  if(x-y<=0.05&&y-x<=0.05) cout<<"same"<<endl;
	}
	return 0;
}
	    