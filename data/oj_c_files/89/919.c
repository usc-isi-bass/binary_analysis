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
	int i,n,a[10000]={0},b[10000]={0},x,y,t=0;;
	cin>>n;
	while (true)
	{
		cin>>x>>y;
		if (x==0&&y==0) break;
		a[x]++;
		b[y]++;
	}
	for ( i=0;i<n;i++)
		if (a[i]==0&&b[i]==n-1) {t++;cout<<i<<endl;}
	if (t==0) cout<<"NOT FOUND";
		return 0;
}

