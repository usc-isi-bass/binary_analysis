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
	int A, B, C, x1, x2, x3; 
	char mun[4];
	for(A = 0; A < 3; A++)
		for(B = 0; B < 3; B++)
			for(C = 0; C < 3; C++)
			{
				x1 = (B > A) + (C == A);
				x2 = (A > B) + (A > C);
				x3 = (C > B) + (B > A);
 				if((x1 + A == 2) && (x2 + B == 2) && (x3 + C == 2) && A !=B && B != C && C != A)
				{
					mun[A] = 'A';
					mun[B] = 'B';
					mun[C] = 'C';	
					mun[3] = '\0';
				}
			}
	cout << mun << endl;
	return 0;
}