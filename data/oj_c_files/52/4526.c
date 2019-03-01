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
	int n,m,num[100],k[100],t,p;
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>num[i];
	for(int i=0;i<m;i++)
	{
		p=num[n-1];
	for(int j=n-1;j>0;j--)
		num[j]=num[j-1];
	num[0]=p;
	}
    for(int i=0;i<n-1;i++)
		cout<<num[i]<<" ";
	cout<<num[n-1];
	return 0;
}