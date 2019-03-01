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
	int i,l,j;
    char x[101];
	cin.get(x,100);
	l=strlen(x);
	for(i=0;i<100;i++)
	{
		if(x[i]==32&&x[i+1]==32)
		{
			for(j=i;j<=100;j++)
			{
				x[j]=x[j+1];
			}
			i--;
		}
	}

    cout<<x;

    return 0;
}
