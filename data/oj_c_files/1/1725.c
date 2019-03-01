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

int work(int p,int n)
{
	if (n==1) k++;
	for (int i=p;i<=n;i++)
		if (n%i==0) work(i,n/i);
}
int main()
{
	int m;
	cin>>m;
	while (m>0)
		{
     cin>>n;
     k=0;
     work(2,n);
					cout<<k<<endl;
					m--;
		}
	return 0;
}
