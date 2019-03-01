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
	char c[1000];
	int l;
	cin.getline(c,1000);
	l=strlen(c);
	for(int i=0;i<l;i++)
	{
		if((c[i]==' ')&&(c[i]==c[i+1]))
		{
			for(int j=i;j<l-1;j++)
			{
				c[j]=c[j+1];
			}
			l--;
			i--;
		}
	}
	for(int i=0;i<l;i++)
	{
		cout<<c[i];
	}
	return 0;
}
