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
	int A,B,C,i;
	char a[4];
	for(A=1;A<=3;A++)
	{	
		for(B=1;B<=3;B++)
		{
			for(C=1;C<=3;C++)
			{
				if(   (B>A)+(C==A)==3-A  &&  (A>B)+(A>C)==3-B  &&  (C>B)+(B>A)==3-C)
				{
					a[A]='A';
					a[B]='B';
					a[C]='C';
					for(i=1;i<=3;i++)
					{
						cout<<a[i];
					}
				}
			}

		}
	}
	return 0;
}
