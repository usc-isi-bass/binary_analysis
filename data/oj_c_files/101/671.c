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
	int A,B,C;
	for(A=1;A<=3;A++)
	{
		for(B=1;B<=3;B++)
		{
			if(B==A)
				continue;
			for(C=1;C<=3;C++)
			{
				if(C==A||C==B)
					continue;
				int i,j,k;
				i=((B>A)+(C==A));
				j=((A>B)+(A>C));
				k=((C>B)+(B>A));
				if(A+i==3&&B+j==3&&C+k==3)
				{
					for(i=1;i<=3;i++)
					{
						if(A==i)
							cout<<"A";
						if(B==i)
							cout<<"B";
						if(C==i)
							cout<<"C";
					}
				}
			}
		}
	}
	return 0;
}
