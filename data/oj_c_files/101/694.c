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

//???
int main()
{
	int A, B, C, a, b, c;
	for(a = 1;a <= 3;a++)
		for(b = 1;b <= 3;b++)
			for(c = 1;c <= 3;c++)
			{
				A = (b > a) + (c == a);
				B = (a > b) + (a > c);
				C = (c > b) + (b > a);
				if(!(a+A==3 && b+B==3 && c+C==3)) continue;
				if(A != B && A != C && B != C)
				{
					if(A + B + C == 3)
					{
						if(A == 2) cout << "A";
						if(B == 2) cout << "B";
						if(C == 2) cout << "C";
						if(A == 1) cout << "A";
						if(B == 1) cout << "B";
						if(C == 1) cout << "C";
						if(A == 0) cout << "A";
						if(B == 0) cout << "B";
						if(C == 0) cout << "C";
						cout << endl;
					}
				}
			}
	return 0;
}