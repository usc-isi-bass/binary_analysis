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
 * homework9.cpp
 *
 *  Created on: 2012-10-11
 *      Author: wangyinzhi
 */

int main(){
	int a,b,c,A,B,C;

	for (a=1;a<=3;a++){
		for (b=1;b<=3;b++){
			for (c=1;c<=3;c++){
				    A=((b>a)+(a==c));
					B=((a>b)+(a>c));
					C=((c>b)+(b>a));//????ABC??????
				if ((A>B>C)&&(c>b)&&(b>a)){
					cout<<"A"<<"B"<<"C";
				break;}
				if ((A>C>B)&&(b<c)&&(c<a)){
					cout<<"A"<<"C"<<"B";
					break;}
				if ((B>A>C)&&(b<a)&&(a<c)){
					cout<<"B"<<"A"<<"C";
					break;}
				if ((B>C>A)&&(b<c)&&(c<a)){
					cout<<"B"<<"C"<<"A";
					break;}
				if ((C>B>A)&&(c<b)&&(b<a)){
					cout<<"C"<<"B"<<"A";
					break;}
				if ((C>A>B)&&(c<a)&&(a<b)){
					cout<<"C"<<"A"<<"B";
					break;}//??????????????????????????




			}
		}
	}

		return 0;
                }

