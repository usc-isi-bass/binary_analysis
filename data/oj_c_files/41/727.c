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
 *???:find.cpp
 *??:??
 *????: 2012-12-01
 *??:??????????
 */


int main(){
   int A,B,C,D,E;
   for(A=1;A<6;A++)
	   for(B=1;B<6;B++)
		   for(C=1;C<6;C++)
			   for(D=1;D<6;D++)
				   for(E=1;E<6;E++)
					   {if((A+B+C+D+E)!=15||(A*B*C*D*E!=120)||E==2||E==3)                                             //???????
							   continue;
					    if(((A==1||A==2)&&E==1)+((B==1||B==2)&&B==2)+((C==1||C==2)&&A==5)
					    		+((D==1||D==2)&&C!=1)+((E==1||E==2)&&D==1)==2&&(E==1)+(B==2)+(A==5)+(C!=1)+(D==1)==2) //??????
					    	cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E<<endl;
					   }
   return 0;
}
