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
	int A=0,B=0,C=0; //??????A,B,C,????????????????0?
	char rank[3]={0}; //??????rank????????
	for(A=0;A<3;A++) //?????????????????
	{
		for(B=0;B<3;B++)
		{
			if(B==A) continue;
			C=3-A-B;
			if(((B<A)+(C==A)==A)&&((A<B)+(A<C)==B)&&((C<B)+(B<A)==C)) //??????????
			{
				rank[A]='A'; rank[B]='B'; rank[C]='C'; //?????
				cout<<rank[2]<<rank[1]<<rank[0]<<endl; // ????????????
			}
		}
	}
	return 0;
}
