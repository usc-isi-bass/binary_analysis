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
	char rank[4];
	rank[0]=rank[1]=rank[2]=rank[3]='0';
	for(A=1;A<=3;A++)
	{
		 for(B=1;B<=3;B++)
		{ 
			for(C=1;C<=3;C++)
			{
				if(((A<B)+(A==C)==(A-1))&&((A>B)+(A>C)==(B-1))&&((C>B)+(B>A))==(C-1))
				{
				
		  
					rank[B]='B';
					rank[C]='C';
					cout<<rank[1]<<rank[2]<<"A"<<endl;
				}
			}
				
		}
	}
	return 0;
}
