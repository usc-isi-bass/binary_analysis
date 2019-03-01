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
	int a,b,c,d,e,f,result;

	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	while(a!=0){
	     result=0;
		 d=d+12;
         result=(d-(a+1))*3600;
         result+=e*60+f+3600-(b*60+c);
		 if (result!=0) {printf("%d\n",result);}
		 scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	}

    return 0;
}
