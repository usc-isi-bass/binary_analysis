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
 * bifanliang.cpp
 *
 *  Created on: 2013-10-14
 *      Author: ???1300012996
 */
int main(){
	int A,B,C,a,b,c;
	for (A=1;A<=3;A++){//????????
		for(B=1;B<=3;B++){
			for(C=1;C<=3;C++){
				a=(B>A)+(C==A);//??????????????
				b=(A>B)+(A>C);
				c=(C>B)+(B>A);
				if(a<b&&b<c&&A>B&&B>C)cout<<"CBA"<<endl;
				if(a<c&&c<b&&A>C&&C>B)cout<<"BCA"<<endl;
				if(b<a&&a<c&&B>A&&A>C)cout<<"CAB"<<endl;
				if(b<c&&c<a&&B>C&&C>A)cout<<"ACB"<<endl;
				if(c<a&&a<b&&C>A&&A>B)cout<<"BAC"<<endl;
				if(c<b&&b<a&&C>B&&B>A)cout<<"ABC"<<endl;//??????????????
			}
		}
	}return 0;
}
