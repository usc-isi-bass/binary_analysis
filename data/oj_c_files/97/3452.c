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
	int n,i;
	cin>>n;
	int zz[6]={100,50,20,10,5,1};
	int z[6];
	for ( i= 0 ; i < 6 ;i ++ )
	{
		z[i]=n / zz[i];
		n -= z[i]*zz[i];
	}
	for ( i = 0 ; i < 6; i ++ )
		cout<<z[i]<<endl;
}