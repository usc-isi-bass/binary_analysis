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
	char quantity[4];
	int As,Bs,Cs;
	for(A=1;A<=3;A++)
	{
		for(B=1;B<=3;B++)
		{
			for(C=1;C<=3;C++)
			{
				As=(B>A)+(C==A);
			    Bs=(A>B)+(A>C);
				Cs=(C>B)+(B>A);
				if(!(A<=B&&As<=Bs||A<=C&&As<=Cs||B<=A&&Bs<=As||B<=C&&Bs<=Cs||C<=A&&Cs<=As||C<=B&&Cs<=Bs))//?????????????????????????????
				{
					quantity[A]='A';
				    quantity[B]='B';
					quantity[C]='C';
					for(int i=1;i<=3;i++)
						cout<<quantity[i];//???????
				}
			}
		}
	}
	cout<<endl;
	
	return 0;
}