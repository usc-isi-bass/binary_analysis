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
	int i,a,b,c;
	char x[3];
    for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
			if(b==a)continue;
		    for(c=0;c<3;c++)
			{
				if(c==a||c==b)continue;
				if(((b>a)+(c==a)==2-a)&&((a>b)+(a>c)==2-b)&&((c>b)+(b>a)==2-c))
				{
					x[a]='A';
					x[b]='B';
					x[c]='C';
					for(i=0;i<3;i++)
						cout<<x[i];
				}
			}
		}
	}
	return 0;
}

