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
	int a[10000]={0};
	int n,i,j;
	cin>>n;
	while(cin>>i>>j&&(i!=0||j!=0))
	{
		a[i]=0;
		a[j]++;
	}
	for(i=0;i<=n-1;++i)
		if(a[i]==n-1)
			cout<<i;
	return 0;
	
}
