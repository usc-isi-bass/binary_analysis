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
3?????????????? 
A??B??????C??????? 
B??A??????A??C??? 
C????B????B?A???? 
????????????????????? 
???????????3??????
*/


int main()
{
	int a,b,c;

	for (a=1;a<=3;a++)
		for (b=1;b<=3;b++)
		{
			c=6-a-b;
			if (a!=b) 
				if (((b>a)+(a==c)+a==3)  && ((a>b)+(a>c)+b==3) && ((c>b)+(b>a)+c==3)) 
				{
					if (a==1) cout << 'A';
					if (b==1) cout << 'B';
					if (c==1) cout << 'C';
					if (a==2) cout << 'A';
					if (b==2) cout << 'B';
					if (c==2) cout << 'C';
					if (a==3) cout << 'A';
					if (b==3) cout << 'B';
					if (c==3) cout << 'C';
					cout << endl;
				}
		}

		return 0;
}

