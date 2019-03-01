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

int main(void)
{
	int n,k,i,apple[200];
	cin>>n>>k;
	apple[n]=n+k;                                  //?????n+k????
	while(1)
	{
	    for(i=n-1;i>0;i--)
	    {
            if(apple[i+1]%(n-1)!=0) break;         //???2?n??????????n-1???
		    apple[i]=apple[i+1]*n/(n-1)+k;
	    }
	    if(i==0) break;
	    apple[n]+=n;
	}
	cout<<apple[1];
    return 0;
}