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

char c[10000][100];///??
int count (char a[])///??????????
{
	int num=0;
	while (a[num]!='\0')
	{
		num++;
	}
	return (num);
}
int main ()
{
	int i,j,k=0,l=0,n,m;
	cin>>n ;
	int b[10000];///??????
	for (i=0;i<n;i++)
	{
		cin>>c[i];
		b[i]=count (c[i]);
	}
	while (k<n-1)///??
	{
		l=0;
		while (l+b[k]+b[k+1]+1<=80)
		{
			cout <<c[k];
			cout <<' ';
			l=l+b[k];
			k++;
			l++;
			if (k==n-1)break;
		}
		if (k==n-1)break;
		cout <<c[k] <<endl;
		k++;
		l++;
		//cout <<l<<endl;
	}
	if (l+b[n-1]<=80)
	cout <<c[n-1] <<endl;
	return (0);
}
