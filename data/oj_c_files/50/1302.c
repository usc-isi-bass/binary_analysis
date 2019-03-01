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
	int fd,m[13]={0,3,0,3,2,3,2,3,3,2,3,2,3},i;
	cin>>fd;
	for(i=0;i<12;i++)
	{
	    if((fd+(m[i]+5)%7)%7==5)
			cout<<i+1<<endl;
		fd+=m[i];
	}
	return 0;
}
