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

int i,j,n;
int prime(int a)
{
	for(i=2;i*i<=a;i++)
		if(a%i==0) return(0);
}
int main()
{
	cin>>n;
	for(j=2;j<=n/2;j++)
	{
		if(prime(j)*prime(n-j)!=0) cout<<j<<" "<<n-j<<endl;
	}
    return 0;
}