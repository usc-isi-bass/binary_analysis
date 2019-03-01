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

//**************************************
//* ??????                       *
//* ?????                         *
//* ???11?12?                     *
//* ?????????                 *
//**************************************
int main()
{
	int words[4],rank[4];                             //words????????rank????
	int A,B,C;
	for(A=1;A<4;A++)
	{
		for(B=1;B<4;B++)
		{
			if(B==A) continue;
			C=6-A-B;                                  //??????
				words[1]=(B>A)+(A==C);
				words[2]=(A>B)+(A>C);
				words[3]=(C>B)+(B>A);
					rank[A]=1;
					rank[B]=2;
					rank[C]=3;
						if(words[rank[1]]>words[rank[2]]&&words[rank[2]]>words[rank[3]])    //????????
					            {
							for(int i=1;i<4;i++)                      //??????
							{
								cout<<(char)(rank[i]+64);
							}
						}
		}
	}
	return 0;
}