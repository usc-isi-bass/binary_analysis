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
 * 20.cpp
 * function????????3?????
 * Created on: 2012-10-24
 * Author: sear
 */
int main(){
	int a,b,c;//a b c????ABC??????
	for(a=1;a<=3;a++){//a?1?3????
		for(b=1;b<=3;b++){//b?1?3????
			for(c=1;c<=3;c++){//c?1?3????
				if((a+(b>a)+(a==c)==3)&&(b+(a>b)+(a>c)==3)
				   &&(c+(c>b)+(b>a)==3)) {
				//????????????????????3
	if(a>b){//???abc???????????????????
		if(a<c) cout<<'B'<<'A'<<'C';
		else{
			if(b>c) cout<<'C'<<'B'<<'A';
			else cout<<'B'<<'C'<<'A';
	}}
	else{
		if(b<c) cout<<'A'<<'B'<<'C';
		else{
			if(a<c) cout<<'A'<<'C'<<'B';
			else cout<<'C'<<'A'<<'B';
		}}
	}}}}
			return 0;//????
}
