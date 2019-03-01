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

int main()
{
	int a,b,c,j,e,f;
	int g=0,h=0,i=0;
	int total=0;
	int n=1000;
    for(i=0;i<n;i++){
	scanf("%d %d %d %d %d %d", &a, &b, &c, &j, &e, &f);
	if(a!=0){
    i=f-c+60;
    h=e-b+60-1;
    g=j-a+12-1;
    h=60*h;
	g=3600*g;
	total=g+h+i;
	printf("%d\n", total);
	}
	if(a=0){
	 break;
	}
	}
	 return 0;
}
