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
	int a, b, c, A, B, C;
	for(a = 0; a < 3; a++)
	{
		for(b = 0; b < 3; b++)
		{
			for(c = 0; c < 3; c++)
			{
				A = (b > a) + (c == a);
				B = (a > b) + (a > c);
				C = (c > b) + (b > a);
				if(a >= b && a >= c && A <= B && A <= C && b >= c && B <= C){
					cout << "ABC" << endl;
					goto loop;
				}
				if(a >= b && a >= c && A <= B && A <= C && b <= c && B >= C){
					cout << "ACB" << endl;
					goto loop;
				}
				if(a <= b && a <= c && A >= B && A >= C && b >= c && B <= C){
					cout << "BCA" << endl;
					goto loop;
				}
				if(a <= b && a <= c && A >= B && A >= C && b <= c && B >= C){
					cout << "CBA" << endl;
					goto loop;
				}
				if(c >= a && c >= b && C <= A && C <= B && a >= b && A <= B){
					cout << "CAB" << endl;
					goto loop;
				}
				if(b >= a && b >= c && B <= A && B <= C && a >= c && A <= C){
					cout << "BAC" << endl;
					goto loop;
				}
			}
		}
	}
loop :
	return 0;
}