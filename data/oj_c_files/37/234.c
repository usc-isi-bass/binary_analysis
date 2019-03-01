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
	int n,len,i,j,k;
	char a[100000],m;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> a;
		int t=0;
		len=strlen(a);
		for(j=0;j<len;j++)
			for(k=j+1;k<len;k++)
				{	
					m=a[j];	
					if(a[k]==m)
					{a[k]='0';
					a[j]='0';}
				}
				for(j=0;j<len;j++)
					if(a[j]!='0')
					{cout << a[j] << endl;
					t=1;
					break;}
					if(t==0)
						cout << "no" << endl;
	}
	return 0;
}





