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
	int n,k,a[100]={0};
	cin>>n;
	for (k=0;k<n;k++)
		cin>>*(a+k);
	cout<<*(a+n-1);
	for (k=n-2;k>=0;k--)
		cout<<" "<<*(a+k);
	cout<<endl;
	return 0;
}