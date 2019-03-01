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


    int  cc1,cc2,cc3,cc4;
	char z, q, s, l;
	for(z=1;z<=4;z++)
		for(q=1;q<=4;q++)
			for(s=1;s<=4;s++)
				for(l=1;l<=4;l++)
					cc1=((q+z)==(s+l));
					cc2=((z+l)>(s+q));
				    cc3=((z+s)<q);
					cc4=(z!=s!=q!=l);
					if(cc2+cc3+cc4+cc1==4)
					
                   
					cout<<'l'<<' '<<50<<endl;
                     cout<<'l'<<' '<<50<<endl;

                    cout<<'q'<<' '<<40<<endl;
					
					cout<<'z'<<' '<<20<<endl;
                    cout<<'s'<<' '<<10<<endl;
					return 0;
}