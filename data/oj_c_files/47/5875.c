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

//????

int main()
{
	int a[100],n,b;
cin>>n;
for(int i=n-1;i>=0;--i)
{
	cin>>b;
	a[i]=b;//???
}
for(int i=0;i<n-1;++i)
{
	cout<<a[i]<<" ";
}
        cout<<a[n-1];
	return 0;
}