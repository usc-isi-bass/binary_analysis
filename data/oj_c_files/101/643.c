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

int main ()
{
	int A,B,C,sent[5],i;
	char b[5];
	for (A=1;A<4;A++)
	{
		for (B=1;B<4;B++)
		{
			if (A==B)
				continue;
			for (C=1;C<4;C++)
			{
				if (A==C||B==C)
					continue;
				else
				{
					b[A]='A';
					b[B]='B';
					b[C]='C';
					sent[A]=(B>A)+(C==A);
					sent[B]=(A>B)+(A>C);
					sent[C]=(C>B)+(B>A);
					for (i=1;i<4;i++)
					{
						if (sent[i]!=(3-i))
							break;
						else if (i==3) 
							cout<<b[1]<<b[2]<<b[3]<<endl;
					}
				}
			}
		}
	}
	return 0;
}