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
	int A, B, C, AmountA, AmountB, AmountC, jumpout = 0;
	for (AmountA = 0 ; AmountA <= 2 ; AmountA++)
	{
		for (AmountB = 0 ; AmountB <= 2 ; AmountB++)
		{
			if (AmountB == AmountA) continue;
			for (AmountC = 0 ; AmountC <= 2 ; AmountC++)
			{
				if ((AmountC == AmountB) || (AmountC == AmountA)) continue;
				A = ((AmountB > AmountB) + (AmountA == AmountC)); 
				B = ((AmountA > AmountB) + (AmountA > AmountC));
				C = ((AmountC > AmountB) + (AmountB > AmountA));
				if ((A == 2 - AmountA) && (B == 2 - AmountB) && (C == 2 - AmountC)) 
					jumpout = 1; break;
			}if (jumpout == 1) break;
		}if (jumpout == 1) break;
	} 	                                
	if (AmountA < AmountB && AmountB < AmountC) cout << "ABC";
	if (AmountB < AmountA && AmountA < AmountC) cout << "BAC";
	if (AmountC < AmountB && AmountB < AmountA) cout << "CBA";
	if (AmountB < AmountC && AmountC < AmountA) cout << "BCA";
	if (AmountA < AmountC && AmountC < AmountB) cout << "ACB";
	if (AmountC < AmountA && AmountA < AmountB) cout << "CAB";
	return 0;
}