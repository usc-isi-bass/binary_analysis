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
	int c,a[2000],n,i=1,b[1000]={0};
	for(int j=0;j<2000;++j)
		a[j]=-1;
	cin>>a[0];
	while(scanf(",%d",&a[i]))
	{
	++i;
	}
	n=i;
	cin>>a[i];++i;
	while(scanf(",%d",&a[i]))
	{
	++i;
	}
	for(int j=0;j<n;++j)
	{   int k,m;
		k=a[j];
		m=a[j+n];
		if(m==a[j+n])
			m-=1;
		for(int l=k;l<=m;++l)
			++b[l];
	}
	sort(b,b+1000);
	cout<<n<<" "<<b[999];
		return 0;
}