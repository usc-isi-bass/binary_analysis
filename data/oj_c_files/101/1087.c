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

//============================================================================
// Name        : c.cpp
// Author      : shaodian
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================


int main()
{
	int A,B,C;
	for(int a=1;a<=3;a++)//a???1????????
		 for(int b=1;b<=3;b++)//
			 for(int c=1;c<=3;c++)//??a,b,c??A,B,C??????
			 {A=(b>a)+(c==a);
			 B=(a>b)+(a>c);
			 C=(c>b)+(b>a);
			 if(A>B&&B>C&&a<b&&b<c){cout<<"ABC"<<endl;break;}
			 if(A>C&&A>B&&a<c&&C<b){cout<<"ACB"<<endl;break;}
			 if(B>A&&A>C&&b<a&&a<c){cout<<"BAC"<<endl;break;}
			 if(B>C&&C>A&&b<c&&c<a){cout<<"BCA"<<endl;break;}
			 if(C>A&&A>B&&c<a&&a<b){cout<<"CAB"<<endl;break;}
			 if(C>B&&B>A&&c<b&&b<a){cout<<"CBA"<<endl;break;}//?????????
			 }


	return 0;
}