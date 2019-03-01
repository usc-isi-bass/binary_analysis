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
	char str[11],sub[4],*max,*p,maxchar;
	while(cin>>str)
	{
		cin>>sub;
		max=str;
		for(p=str;*p;p++)if(*max<*p)max=p;
		maxchar=*max;*max=0;
		cout<<str<<maxchar<<sub<<max+1<<endl;
	}
	return 0;
}
