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

/*??
???????a????????????????
?a = a1 * a2 * a3 * ... * an???1 < a1 <= a2 <= a3 <= ... <= an?
????????????????a = a???????
????
?1?????????n?????n???????????1?????????a (1 < a < 32768)
????
n???????????????????????????????????*/
int main()
{
	int F( int, int );
    int N;cin>>N;
    for( int I=1; I<=N; ++I)
    {
    	int A; cin>>A;
    	cout<<F(A,2)<<endl;
    }
	return 0;
}

int F(int A, int CHU)//?A???CHU???????????
{
   int RET=1;
   for( int I=CHU;I<=sqrt(A);I++)
   {
	   if(A%I==0)RET+=F(A/I,I);
   }

   return RET;
}
