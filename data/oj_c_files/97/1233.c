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
	int s,a=0,b=0,c=0,d=0,e=0,f=0;
	scanf("%d",&s);
	if(s/100!=0){
		a=s/100;
		s=s-(s/100*100);
	}
	if(s/50!=0){
        b=s/50;
		s=s-(s/50*50);
	}
	if(s/20!=0){
        c=s/20;
		s=s-(s/20*20);
	}
	if(s/10!=0){
        d=s/10;
		s=s-(s/10*10);
	}
	if(s/5!=0){
        e=s/5;
		s=s-(s/5*5);
	}
    f=s;
	printf("%d\n",a);
    printf("%d\n",b);
	printf("%d\n",c);
	printf("%d\n",d);
	printf("%d\n",e);
	printf("%d\n",f);
	return 0;
}
