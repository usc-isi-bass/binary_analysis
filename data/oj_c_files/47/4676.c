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
	int n;
	int a[100],b[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
        b[n-i-1]=a[i];
	}
	for(int j=0;j<n-1;j++)
		cout<<b[j]<<" ";
	cout<<b[n-1]<<endl;
	return 0;
}