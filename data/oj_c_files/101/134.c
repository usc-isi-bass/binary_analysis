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

int main( )      //?????
{      //?????
int A,B,C;      //??3?????
int words[4];      //??3?????
char rank[4];
for(A=1;A<=3;A++){      //???????A
	for(B=1;B<=3;B++){      //???????B
		if(A==B) continue;
		for(C=1;C<=3;C++){      //???????C
			if(A==C||B==C) continue;
			words[1]=(B>A)+(A==C);      //A???
			words[2]=(A>B)+(A>C);      //B???
			words[3]=(C>B)+(B>A);      //C???
			//????????????????
			if(!(A<B&&words[1]<=words[2]||A<C&&words[1]<=words[3]||
			     B<A&&words[2]<=words[1]||B<C&&words[2]<=words[3]||
			     C<A&&words[3]<=words[1]||C<B&&words[3]<=words[2])){
                             //????????????
						 rank[A]='A';
						 rank[B]='B';
						 rank[C]='C';
						 cout <<rank[1] <<rank[2] <<rank[3]<<endl;
			}
		}
	}
}
return 0;      //???????????????????
}      //????