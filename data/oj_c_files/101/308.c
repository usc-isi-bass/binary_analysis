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

/**
@ file 1000012907_4.cpp
@ author ???
@ date 2010-11-21
@ description
@ ?????????? 
*/
int main()
{
	int A, B, C, a1, a2, b1, b2, c1, c2, max = 0, min = 0, mid = 0, temp = 0;		
	for (A = 0; A < 3; A++)									// A??A??????0?????2????
	{
		for (B = 0; B < 3; B++)								// B??B??????0?????2????
		{
			for (C = 0; C < 3; C++)							// C??C??????0?????2????
			{
				a1 = (B > A);								// a1?a2??A???????b1?b2??B???????c1?c2??C??????
				a2 = (C == A);
				b1 = (A > B); 
				b2 = (A > C);
				c1 = (C > B);
				c2 = (B > A);
				// ????????????????
				if (a1 + a2 + A == 2 && b1 + b2 + B == 2 && c1 + c2 + C == 2)
				{
					if (A < B && B < C)						// ???????????????
					{
						cout << "A" << "B" << "C";
					}
					if (A < C && C < B) 
					{
						cout << "A" << "C" << "B";
					}
					if (B < A && A < C)
					{
						cout << "B" << "A" << "C";
					}
					if (B < C && C < A)
					{
						cout << "B" << "C" << "A";
					}
					if (C < B && B < A)
					{
						cout << "C" << "B" << "A";
					}
					if (C < A && A < C)
					{
						cout << "C" << "A" << "B";
					}
				}
			} 
		}
	}
	return 0;
}
