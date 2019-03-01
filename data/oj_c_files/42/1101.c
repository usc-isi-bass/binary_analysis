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
	double a[100000];
	int n,m,o=0,l;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	double k;
	cin>>k;
	for(int i=0;i<n-o;i++)
	{
		if(a[i]==k)
		{
			m=i;
			for(int j=m;j<n-o-1;j++)
			{
				a[j]=a[j+1];
			}
            o++;
			i--;
		}
	}
		for(l=0;l<n-o-1;l++)
			cout<<a[l]<<" ";
		cout<<a[l];
				return 0;

}
