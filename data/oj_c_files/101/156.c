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
	int A,B,C,i;                                           //????
	int rank[4],word[4];                //??????,??????,???
	for(A=1;A<=3;A++)
		for(B=1;B<=3;B++)
		{
			if(A==B)continue;
			C=6-A-B;                       //?????????
			word[1]=(B<A)+(C==A);
			word[2]=(A<B)+(A<C);
			word[3]=(C<B)+(B<A);        //???????????
			rank[A]=1;            
			rank[B]=2;
			rank[C]=3;                                 
                                                   //?A,B,C?????????
            if(word[rank[1]]==0&&word[rank[2]]==1&&word[rank[3]]==2)        
                                                                     
                                          //?????????????????
				for(i=3;i>=1;i--)
				{
					cout<<(char)(rank[i]+64);
                                            //?????????????
				}
		}
				return 0;
}




