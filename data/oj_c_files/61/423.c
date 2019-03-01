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
	int a[20]={1,1};
	int i=0;
	for (i=2;i<=20;i++) a[i]=a[i-1]+a[i-2];//?20?
	int n=0;
	cin>>n;
	int b[100]={0};//????
	for (i=0;i<=n-1;i++)
	{
		cin>>b[i];
	}
	for (i=0;i<=n-1;i++)
	{
		cout<<a[b[i]-1]<<endl;
	}
	return 0;
}