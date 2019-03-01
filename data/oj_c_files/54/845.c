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
	int n,k,m,i;
	cin>>n>>k;
	int f[n+1];                          //????????? ??? ??? ??
	for (m=1;;m++)
	{
		f[1]=m;
	    for (i=2;i<=n+1;i++)
		    if ((f[i-1]-k)%n!=0)               //?????? ???????????
			    break;
		    else f[i]=f[i-1]-k-(f[i-1]-k)/n;
	if ((i==n+2)&&(f[n]>=n+k))                     //???????????????????
		{
		cout<< m <<endl;
		break;
		}
	else continue;
	}
	return 0;
}
