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

//********************************************************
//*    ??   1100012931                                 *
//*    ??:  ?????                                 *
//*    ???  2011.10.23                                *
//********************************************************
int main()
{
    int n,b,i,k;
	cin>>n;
	b=n;
	if(b==0)
		cout<<b;
	for(i=0;b>=1;i++)
	{
		k=b%10;//?????????????
		b=b/10;//????????
	    cout<<k;
	}
	return 0;
}
	




	
