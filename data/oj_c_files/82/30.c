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

int main(int argc, char* argv[])
{ 
	int i,n,x[200];
	int t=0;
	int s=0;
	int max(int x,int y);
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
	scanf ("%d %d",&x[(2*i)],&x[(2*i+1)]);
	}
    for (i=0;i<n;i++)
	{
		if (
			(x[(2*i)]<=140)
			&&(x[(2*i)]>=90)
			&&(x[(2*i+1)]<=90)
			&&(x[(2*i+1)]>=60)
			)
	   {
	    s=s+1;
		}
	    else 
		{
			t=max (t,s);
		    s=0;
		}
	
	}
	t=max (t,s);
	printf ("%d",t);
	return 0;
}
int max(int x,int y)
{
int z;
if (x>y) z=x;
else z=y;
return(z);
}
