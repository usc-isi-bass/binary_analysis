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
 * ????20.cpp
 * ??????
 * ????:2012-10-23
 * ??????
 */

int main(){                                                                         //???
	for(int A=0;A<=2;A++)                                                       //????A??for????A???????????0????1????2?
		for(int B=0;B<=2;B++)                                               //????B?for????B??
			for(int C=0;C<=2;C++)                                       //????C?for????C??
				if(A==(B<A)+(C==A)&&B==(A<B)+(A<C)&&C==(C<B)+(B<A)) //???????????????????????????
					for(int i=2;i>=0;i--){                      //?for?????????????????3?????
						if(A==i)
							cout<<"A";
						if(B==i)
							cout<<"B";
						if(C==i)
							cout<<"C";
					}
	return 0;                                                                   //?????
}