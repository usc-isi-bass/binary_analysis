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

/*???:???
**?  ?:??
**?  ?:2010?11?23?
*/
int main()
{
	int A, B, C, i, j[3], r[3];
	char R[3] = {'A', 'B', 'C'};
	//???0,1,2??????,????????
	for (A = 0; A <= 2; A++)
		for (B = 0; B <= 2; B++)
			for (C = 0; C <= 2; C++)
			{
				r[0] = (B > A) + (C == A);//A?????
				r[1] = (A > B) + (A > C);//B?????
				r[2] = (C > B) + (B > A);//C?????
				j[0] = r[0] + A;//A??????A????
				j[1] = r[1] + B;//B??????B????
				j[2] = r[2] + C;//C??????C????
				//?????????,????????????2
				if (j[0] == 2 && j[1] == 2 && j[2] == 2)
				{
					for (i = 0; i <= 2; i++)
					{
						if (r[i] == 2)
							j[0] = i;
						if (r[i] == 1)
							j[1] = i;
						if (r[i] == 0)
							j[2] = i;
					}//??
					for (i = 0; i <= 2; i++)
						cout << R[j[i]];
					cout << endl;
				}	
			}
	return 0;
}