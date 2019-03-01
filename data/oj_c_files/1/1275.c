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

int ways(int n,int p)
{
	if(n<p) return 0;
	while(n%p!=0) p++;
	if(n==p) return 1;
	return ways(n/p,p)+ways(n,p+1);
}
int main()
{
	int n,m;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>m;
		cout<<ways(m,2)<<endl;
	}
	return 0;
}