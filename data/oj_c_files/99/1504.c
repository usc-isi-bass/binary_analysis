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

int main () {

	int i,n,year, a=0,b=0,c=0,d=0;
	double e,f,g,h;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&year);
	if(year<=18&&year>=1){a++;}
    else if(year<=35&&year>=19){b++;}
	else if(year<=60&&year>=36){c++;}
	else if(year>=60){d++;}
	}
    printf("1-18: %.2lf",(double)a/n*100);printf("%%\n");
	printf("19-35: %.2lf",(double)b/n*100);printf("%%\n");
	printf("36-60: %.2lf",(double)c/n*100);printf("%%\n");
	printf("60??: %.2lf",(double)d/n*100);printf("%%\n");





return 0; }