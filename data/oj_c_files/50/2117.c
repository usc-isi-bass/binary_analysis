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

// &sup2;&raquo;&frac14;&ordf;&Agrave;&ucirc;&Ecirc;&yacute;×&Ouml;.cpp : Defines the entry point for the console application.
//
int main(int argc, char* argv[])
{
	int first,i,day=13;
	scanf("%d",&first);
	for(i=1;i<=12;i++){
		if(i==2||i==4||i==6||i==8||i==9||i==11){
			day+=31;
		}
		if(i==3)day+=28;
		if(i==5||i==7||i==10||i==12){
			day+=30;
		}
		if((day%7-1+first)%7==5)printf("%d\n",i);
	}
	return 0;
}

