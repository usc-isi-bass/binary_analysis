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

int main(void)
{
		char c,a[101][101];
	int i=1,j=0;
	while(1)
	{
		cin.get(c);
		if(c!=32&&c!=10)
		{
			a[i][j]=c;
			j++;
		}
		else 
		{
			a[i][j]='\0';
			if(c==32)
			{
				i++;
				j=0;
			}
			else break;
		}
	}
	for(j=i;j>1;j--) cout<<a[j]<<" ";
	cout<<a[1];
}
