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
	int w,i,j,s;
	scanf("%d",&w);
	for(i=1;i<=12;i++){
		switch(i){
		case 1:s=13;break;
	    case 2:s=s+31;break;
		case 3:s=s+28;break;
		case 4:s=s+31;break;
	    case 5:s=s+30;break;
		case 6:s=s+31;break;
	    case 7:s=s+30;break;
		case 8:s=s+31;break;
		case 9:s=s+31;break;
		case 10:s=s+30;break;
		case 11:s=s+31;break;
		case 12:s=s+30;break;
		}
		if ((s-1+w)%7==5)printf("%d\n",i);
	}
	return 0;
}
