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
    int A, B, C, a, b, c;
	for (A = 0; A <= 2; A++)
	{
		for (B = 0; B <= 2; B++)
		{
            if (B == A)
				continue;
			else
			{
				C = 3 - B - A;
				a = (B > A);
				b = (A > B) + (A > C);
				c = (C > B) + (B > A);
				if ((a == (2 - A)) && (b == (2 - B)) && (c == (2 - C)))
				{
					if (A < B && A < C)
					{
						cout << "A";
						if (B < C)
						    cout << "B" << "C";
						else
							cout << "C" << "B";
                    }
					if (B < A && B < C)
					{
						cout << "B";
						if (A < C)
						    cout << "A" << "C";
						else
							cout << "C" << "A";
                    }
					if (C < B && C < A)
					{
						cout << "C";
						if (B < A)
						    cout << "B" << "A";
						else
							cout << "A" << "B";
                    }
				}
			}
		}
	}
	return 0;
}