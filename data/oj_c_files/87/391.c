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
	int a,b,c,d,e,f,i,j,h,m;
	for(;;){
    scanf("%d %d %d %d %d %d",&a, &b, &c,&d, &e, &f);
    if(a==0 && b==0 && c==0 ){
		break;
	}
      h=d+12-a;
      m=h*60*60+e*60+f-b*60-c;
	  printf("%d\n",m);
	}
	return 0;
}
   