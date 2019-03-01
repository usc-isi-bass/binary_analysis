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

int i,n,k;

void work(int p,int u)
{
	if (u==1) {cout<<p;exit (0);}
	if (p%(n-1)==0)
  if((n*p/(n-1)+k)%n==k)
	 work(n*p/(n-1)+k,u-1);
}
int main()
{
	cin>>n>>k;
	while (n!=k)
					if (n>k) n=n>>1; else k=k>>1;
  cout<<n;
	return 0;
}
