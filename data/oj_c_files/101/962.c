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
	for(int a = 1;a <= 3;a ++)
		for(int b = 1;b <= 3;b ++)
			for(int c = 1;c <= 3;c ++){
				A = (a < b) + (a == c);
				B = (a > b) + (a > c);
				C = (c > b) + (b > a);
				if(a < b && b < c && A > B && B > C) printf("ABC\n");
				if(a < c && c < b && A > C && C > B) printf("ACB\n");
				if(b < a && a < c && B > A && A > C) printf("BAC\n");
				if(b < c && c < a && B > C && C > A) printf("BCA\n");
				if(c < a && a < b && C > A && A > B) printf("CAB\n");
				if(c < b && b < a && C > B && B > A) printf("CBA\n");
			}
	return 0;
}