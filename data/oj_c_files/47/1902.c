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
	void nixu(int,int a[]);
	int i,a[100]={0},n;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	nixu(n,a);
	return 0;
}

void nixu(int n,int a[])
{
	if(n==1) cout<<a[0];
	else
	{
	cout<<a[n-1]<<' ';
	nixu(n-1,a);
	}
}