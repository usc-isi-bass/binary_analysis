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
	int A,B,C,D,E,a,b,c,d,e;
	for(E=1;E<=5;E++)
		for(A=1;A<=5;A++)
			for(B=1;B<=5;B++)
				for(C=1;C<=5;C++)
					for(D=1;D<=5;D++)
					{
						if( (A!=B)&&(A!=C)&&(A!=D)&&(A!=E)&&(B!=C)&&(B!=D)&&(B!=E)&&(C!=D)&&(C!=E)&&(D!=E)&&(E!=2)&&(E!=3))
						{
							a=(E==1);
							b=(B==2);
							c=(A==5);
							d=(C!=1);
							e=(D==1);
							if(((A+a<=3)+(B+b<=3)+(C+c<=3)+(D+d<=3)+(E+e<=3)==3)&&(a+b+c+d+e==2)&&((A+a<=2)+(B+b<=2)+(C+c<=2)+(D+d<=2)+(E+e<=2)==1)&&((A==a)+(B==b)+(C==c)+(D==d)+(E==e)==1))
							{cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E<<endl;}
						}
					}
						return 0;
					}
