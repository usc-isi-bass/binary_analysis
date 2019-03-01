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
	int l, i, j, k;
	 char a[31];
	 cin.getline(a,31);
	 l = strlen(a);
	 j = 0;
	 for (i = 0; i <= l; i++)
		 if( a[i] < '0' || a[i] > '9' || i == l)
		 {
			 for (k = j; k < i; k++)
			 {
				 cout << a[k];
				 if (k == (i - 1))
					 cout << endl;
			 }
			 j = i + 1;
		 }
	 return 0;
}