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
	char a[101];
	cin.getline(a,100);
	int l=0;
	l=strlen(a);

	a[l]=' ';
	int n[51]={0},k=1;
	for(int i=0;i<l;i++)
	{
		if(a[i]==' ')
			{n[k]=i;
		k++;}
	}

	n[k]=l;
	n[0]=-1;
	for(int i=k;i>1;i--)
		for(int j=n[i-1]+1;j<=n[i];j++)
		{
			cout<<a[j];

		}
	for(int j=0;j<n[1];j++)
		cout<<a[j];
	return 0;
}