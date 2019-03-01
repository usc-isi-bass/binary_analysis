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
	int A,B,C;//????
	int a,b,c;
	char m[4];//??????????
	for(A=1;A<=3;A++)//??
		for(B=1;B<=3;B++)
			for(C=1;C<=3;C++)
			{
				a = (B>A)+(C==A);//???????
				b = (A>B)+(A>C);
				c = (C>B)+(B>A);
				if((A-B)*(a-b)<=0 && (A-C)*(a-c)<=0 && (B-C)*(b-c)<=0)//????
					if((A==B)+(a==b)!=1 && (A==C)+(a==c)!=1 && (B==C)+(b==c)!=1)//??????
					{
						m[A]='A';//??????
						m[B]='B';
						m[C]='C';
						for(int i=1;i<=3;i++)
							cout << m[i];
					}
			}
	cout << endl;
	return 0;
}
