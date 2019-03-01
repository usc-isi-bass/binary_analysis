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
	int a[20],b[20],i,n;
	a[0]=0,a[1]=1,a[2]=1;
	for(i=0;i<=20;i++) a[i+2]=a[i+1]+a[i];
	cin>>n;
	for(i=0;i<=n-1;i++) cin>>b[i];
	for(i=0;i<=n-1;i++) cout<<a[b[i]]<<endl;
	return 0;
}
	
