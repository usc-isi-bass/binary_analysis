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
	int a,b,c,d,e,f;
	int x;
	while(a!=0){
		x=0;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	if(a==0)
		break;
	x=12*3600+(d-a)*3600+(e-b)*60+f-c;
	printf("%d\n",x);}
	return 0;	
}
