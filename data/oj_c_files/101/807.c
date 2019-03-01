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

//**********************************
//****       ??????     *****
//****        1200016612       *****
//**      ??????    **********
//**********************************
int main()                                                   //?????
{
	int A,B,C,c[3],t;
	for(A=0;A<=2;A++){                                        //?A,B,C??????0,1,2??
		for(B=0;B<=2;B++){
			for(C=0;C<=2;C++){
				c[0]=(B>A)+(C==A);                            //????????????       
				c[1]=(A>B)+(A>C);
				c[2]=(C>B)+(B>A);
				if(c[0]+A==2&&c[1]+B==2&&c[2]+C==2){          //?????????0,1,2???????????????????2
					if(A<=B&&B<=C)                            //?????
						cout<<"ABC"<<endl;
					if(A<=C&&C<=B)
						cout<<"ACB"<<endl;
					if(B<=A&&A<=C)
						cout<<"BAC"<<endl;
					if(B<=C&&C<=A)
						cout<<"BCA"<<endl;
					if(C<=A&&A<=B)
						cout<<"CAB"<<endl;
					if(C<=B&&B<=A)
						cout<<"CBA"<<endl;}
			}
		}
	}
	return 0;				
}