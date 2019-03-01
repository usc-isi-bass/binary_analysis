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

void f(char a[99],char b)
{
	int i,j,k,sum=0;
	for (i=0;a[i]!='\0';i++)
	{
		if (a[i]==b) continue;
		for (j=i-1;j>=0;j--)
		{
			for (k=j;k<=i;k++) if (a[k]==b) sum++;
			if (sum==(i-j+1)/2.0) 
			{
				sum=0;
				cout<<j<<' '<<i<<endl;
				break;
			}
			sum=0;
			
		}
	}
}
int main()
{
	 char a[99],b;
	cin.getline(a,99);
	b=a[0];
	f(a,b);
	return 0;
}