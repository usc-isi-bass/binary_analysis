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
	char a[600];
	cin>>a;
	int l;
	l=strlen(a);
	int i,j,k,m;
	for(i=1;i<=l/2;i++)
		for(j=i;j<=l-i;j++)
		{
			m=0;
			for(k=i;k>0;k--)
			{
				if(a[j+k-1]==a[j-k])
					m=m+1;
			}
			if(m==i)
			{
				for(k=j-i;k<=j+i-1;k++)
					cout<<a[k];
				cout<<endl;
			}
		}
	return 0;
}

