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
	int iz,iq,is,il,z,q,s,l;
	for(iz=10;iz<=50;iz+=10)
	
		for(iq=10;iq<=50;iq+=10)
		
			for(is=10;is<=50;is+=10)
			
				for(il=10;il<=50;il+=10)
				
					if((iz+iq==is+il)&&(iz+il>iq+is)&&(iz+is<iq))
					{
						z=iz;
						q=iq;
						s=is;
						l=il;
						break;
					}
	
	printf("l %d\n",l);
	printf("q %d\n",q);
	printf("z %d\n",z);
	printf("s %d\n",s);
    return 0;
}

	
