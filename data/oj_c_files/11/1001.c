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
	int a,b,c,d;
	cin>>a>>b>>c;
	if((a%4==0&&a%100!=0)||a%400==0){
		int m[13]={0,31,60,91,121,151,182,213,244,274,305,335,366};
		d=m[b-1]+c;}
	else {int m[13]={0,31,59,90,120,150,181,212,243,273,304,334,365};
		d=m[b-1]+c;}
	cout<<d;return 0;}