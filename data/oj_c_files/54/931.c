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
	int n,k,apple[100],i;
	cin>>n>>k;
	apple[n]=n+k;                           //?????????????????
	for (i=n-1;i>=1;i--)
	{
		if (apple[i+1]%(n-1)==0)        //??????????????????????????
		{
			apple[i]=apple[i+1]/(n-1)*n+k;
		}
		else                               //???????????????????????????
		{
			apple[n]+=n;
			i=n;
			continue;
		}
	}
	cout<<apple[1]<<endl;
	return 0;
}