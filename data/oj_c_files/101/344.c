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

//???1000012915
int main()
{
	int A,B,C;
	char F[4];
	for(A=0;A<3;A++)
	{
		for(B=0;B<3;B++)
		{
			if(A==B)continue;
			for(C=0;C<3;C++)
			{
				if(C==A || C==B)continue;
				if(A == (B<A) + (A==C) && B == (A<B) + (A<C) && C == (C<B) + (B<A))
				{
					F[A]='A';
					F[B]='B';
					F[C]='C';
					cout<<F[2]<<F[1]<<F[0];
				};
			};
		};
	};
	return 0;
}
