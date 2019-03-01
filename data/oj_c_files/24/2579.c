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
	char a[100],b[100],c[100];
	int n,j,i,k,l,max,min;
	cin>>n;
	cin>>a;
	strcpy(b,a);
	strcpy(c,a);
	max=min=strlen(a);
	for(i=2;i<=n;i++)
	{
		cin>>a;
		k=strlen(a);
		if(k>max)
		{
			max=k;
			strcpy(b,a);
		}
		else if(k<min)
		{
			min=k;
			strcpy(c,a);
		}
	}
	cout<<b<<endl;
	cout<<c<<endl;
	return 0;
}
