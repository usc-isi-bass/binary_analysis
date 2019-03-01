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

int son(char *a,int n)
{
	int i;
	for(i=0;i<n/2;i++)
	{
	  if(a[i]!=a[n-i-1])return 0;
	}
	for(i=0;i<n-1;i++)cout<<a[i];
	cout<<a[n-1]<<endl;
	return 0;
}
int main()
{
	char a[500];
	cin>>a;
	int n;
	n=strlen(a);
	for(int i=2;i<=n;i++)
	{
	 for(int j=0;j<n-i+1;j++)
	 {
		 son(&a[j],i);
	 }
	}
	return 0;
}