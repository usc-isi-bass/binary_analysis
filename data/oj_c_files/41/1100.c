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
	int A=0, B=2, C=0, D=0, E=0,a, b, c, d,e,i;
	for(A=1; A<=5; A++)
		for(B=1; B<=2; B++)
			for(C=1; C<=5; C++)
				for(D=1; D<=5; D++)
					for(E=1; E<=5; E++)
					{
						a=(E==1);
						b=1;
						c=(A==5);
						d=(C!=1);
						e=(D==1);
						int m[5]={a,b,c,d,e};
						int n[5]={A,B,C,D,E};
						for(i=0; i<5; i++)
						{
							if(((B==1&&A==2&&a==1&&c+d+e==0)||(B==1&&C==2&&c==1&&a+d+e==0)||(B==0&&D==2&&d==1&&c+a+e==0)||(B==2&&A==1&&a==1&&c+d+e==0)||(B==2&&C==1&&c==1&&a+d+e==0)||(B==2&&D==1&&d==1&&c+a+e==0)||(B==2&&E==1&&e==1&&c+d+a==0))&&(A*B*C*D*E==120)&&D!=4)
							{
								cout<<A<<' '<<B<<' '<<C<<' '<<D<<' '<<E;
								break;
							}
					
							
						}
					}

return 0;
}