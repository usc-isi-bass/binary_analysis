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
	char rank[3];
	int i;
	for(A=0;A<3;A++)
	{
		for(B=0;B<3;B++)
		{
			if(B!=A)
			{
				C=3-A-B;
				if((A+((B>A)+(C==A))==2)&&(B+((A>B)+(A>C))==2)&&(C+((C>B)+(B>A))==2))
				{
					rank[A]='A';
					rank[B]='B';
					rank[C]='C';
				}
			}
		}
	}
	for(i=0;i<3;i++)
		cout<<rank[i];
   	return 0;
}