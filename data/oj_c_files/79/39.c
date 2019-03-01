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


int josephus0(int n, int m)
{
	if (n == 2) return (m%2) ? 2 : 1;
	int v = (m+josephus0(n-1,m)) % n;
	if (v == 0) v = n;
	return v;
}
int josephus(int n, int m)
{
	if (m == 1) return n;
	if (n == 1) return 1;
	if (m >=n) return josephus0(n,m);
	int l = (n/m)*m;
	int j = josephus(n - (n/m), m);
	if (j <= n-l) return l+j;
	j -= n-l;
	int t = (j/(m-1))*m;
	if ((j % (m-1)) == 0) return t-1;
	return t + (j % (m-1));
}
int main()
{
int n , k;
while(2 == scanf("%d %d",&n ,&k))
{
   if(n == 0 && k == 0)break;
    printf("%d\n",josephus(n , k));
}
 return 0;
}