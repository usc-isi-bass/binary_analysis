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

int main(){
	int A,B,C,D,E,a,b,c,d,e,front;  //??????A-E???5???????????a-e???5???????????(???1,???0),front??"E????????2???3?"????(???1,???0)
	for(A=1;A<=5;A++)  //??A-E???
		for(B=1;B<=5;B++)
			if(B!=A)    //4?if?????????????
			for(C=1;C<=5;C++)
				if(C!=B&&C!=A)
				for(D=1;D<=5;D++)
					if(D!=C&&D!=B&&D!=A)
					for(E=1;E<=5;E++)
						if(E!=D&&E!=C&&E!=B&&E!=A)
							{front=(E!=2&&E!=3);   //??front??????
							a=(A==1||A==2)?(E==1):!(E==1);  //??5???????????
							b=(B==1||B==2)?(B==2):!(B==2);
							c=(C==1||C==2)?(A==5):!(A==5);
							d=(D==1||D==2)?(C!=1):!(C!=1);
							e=(E==1||E==2)?(D==1):!(D==1);
							if((front+a+b+c+d+e)==6)  //??5???????front?????,?(front+a+b+c+d+e)==6,??5??????
								cout<<A<<' '<<B<<' '<<C<<' '<<D<<' '<<E;
							}

	return 0;
}