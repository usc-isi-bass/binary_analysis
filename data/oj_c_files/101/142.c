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

int main()//?????
{
int a,b,c,A,B,C;//??????
int say[3];//????????
for(a=0;a<=3;a++){
	for(b=0;b<=3;b++){
		for(c=0;c<=3;c++){//????????
			say[0]=(b>a)+(c==a);
			say[1]=(a>b)+(a>c);
			say[2]=(c>b)+(b>a);//???????????????
			if(!(a<=b&&say[0]<=say[1]||a<=c&&say[0]<say[2]||
				b<=a&&say[1]<=say[0]||b<=c&&say[1]<=say[2]||
				c<=a&&say[2]<=say[0]||c<=b&&say[2]<=say[1])){//??????????????????????
					A=a;
					B=b;
					C=c;
			}
		}
	}
}
if(A>=B&&B>=C){
	cout<<"CBA"<<endl;}
if(A>=C&&C>=B){
	cout<<"BCA"<<endl;}
if(B>=A&&A>=C){
	cout<<"CAB"<<endl;}
if(B>=C&&C>=A){
	cout<<"ACB"<<endl;}
if(C>=A&&A>=B){
	cout<<"BAC"<<endl;}
if(C>=B&&B>=A){
	cout<<"ABC"<<endl;}//??????????
return 0;
}