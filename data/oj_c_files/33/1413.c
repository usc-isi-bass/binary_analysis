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
	int i,j,n;
	char a[300];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a;
		for(j=0;j<strlen(a);j++)
		{
			if(a[j]=='A')
				a[j]='T';
			else if(a[j]=='T')
				a[j]='A';
			else if(a[j]=='C')
				a[j]='G';
			else
				a[j]='C';
		}
		cout<<a<<endl;
	}
	return 0;
}
