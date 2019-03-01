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
 * ???????.cpp
 * ?????
 * ????: 2012-10-23
 * ??????
 */
int main(){																	//?????
	int a,b,c=0,i=0;														//???????a,b,c,i
	for(a=0;a<=2;a++){
		for(b=0;b<=2;b++){
			if(b==a)continue;
			for(c=0;c<=2;c++){
				if(c==a||c==b)continue;										//????
				if(a+(b>a)+(c==a)==2&&b+(a>b)+(a>c)==2&&c+(c>b)+(b>a)==2)	//??
				{
					for(i=0;i<=2;i++)										//???????
					{
						if(a==i)cout<<"A";
						if(b==i)cout<<"B";
						if(c==i)cout<<"C";									//?i????????????
					}														//i?????
				}
			}
		}
	}																		//??????
	return 0;
}																			//?????