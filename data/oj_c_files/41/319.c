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
 * 00005.cpp
 *
 *  Created on: 2011-11-6
 *      Author: b
 */
int main()
{
	int A,B,C,D,E;//????
	for(A=1;A<=5;A++)//for???A,B,C,D,E?1??5
		for(B=1;B<=5;B++)
			for(C=1;C<=5;C++)
				for(D=1;D<=5;D++)
					for(E=1;E<=5;E++)
						if((E!=2)&&(E!=3))//???E???2?3??????????
						{
							if((A!=B)&&(A!=C)&&(A!=D)&&(A!=E)&&(B!=C)&&(B!=D)&&(B!=E)&&(C!=D)&&(C!=E)&&(D!=E))//????A,B,C,D,E????
							if((E==1)+(B==2)+(A==5)+(C!=1)+(D==1)==2)//?????2?
							{
								if(((C==1||C==2))&&((D==1)||(D==3))&&((B==2)||(B==3)))//???????????
									if(A==5)
							cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E<<endl;
							}
						}

return 0;
}