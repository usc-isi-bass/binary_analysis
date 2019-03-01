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
	int n;cin>>n;
	int num;
	if(5-n<0) num=5-n+7;
	else num=5-n;
	int month[12]={0,31,59,90,120,151,181,212,243,273,304,334};
	for(int i=0;i<12;i++){
		if((month[i]+12)%7==num) {cout<<i+1<<endl;}
	}

}