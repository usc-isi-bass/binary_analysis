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
	int peach[100];
	int i,n,k,m;
	cin>>n>>k;	//??n?k
	peach[n]=n+k;	//?n???????n+k???
	for (i=n;i>=2;i--)
	{
		if (peach[i]%(n-1)==0) peach[i-1]=peach[i]/(n-1)*n+k;	//???????????????????
		else 
		{
			peach[n]=peach[n]+n;	//??????????
			i=n+1;	//????
		}
	}
	cout<<peach[1]<<endl;
	return 0;
}