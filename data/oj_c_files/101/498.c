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

/*
???????
??????
?????2011.10.12
*/
int main()
{
	int A,B,C,a,b,c;
	for(A = 0; A < 3; A++)
		for(B = 0; B < 3; B++)
			for(C = 0; C < 3; C++)
			{
				a = ((B > A) + (C == A));
                b = ((A > B) + (A > C));
                c = ((C > B) + (B > A));
                if(((A > B && a < b) || (A == B && a == b) || (A < B && a > b))
					+ ((A > C && a < c) || (A == C && a == c) || (A < C && a > c))
					+ ((B < C && b > c) || (B > C && b < c) || (B == C && b == c)) == 3)     //if it matches the factor,do the sentence below
				{
					if(A >= B && B >= C)
						cout << "CBA";
                    if(A >= C && C >= B)
						cout << "BCA";
					if(B >= A && A >= C)
						cout << "CAB";
					if(B >= C && C >= A)
						cout << "ACB";
					if(C >= A && A >= B)
						cout << "BAC";
					if(C >= B && B >= A)
						cout << "ABC";
				}
			}
return 0;
}