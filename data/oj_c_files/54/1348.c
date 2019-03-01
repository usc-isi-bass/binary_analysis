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

int i=1;int n,k;
int f(int x)
{
	if (x==1) return (i*n+k);
	else if (f(x-1)%(n-1)==0)return (f(x-1)*n/(n-1)+k);
	else
		{while(f(x-1)%(n-1)!=0)
		i++;
		return (f(x-1)*n/(n-1)+k);
		}
}
int main()
{

	cin>>n>>k;
	cout<<f(n);

}
