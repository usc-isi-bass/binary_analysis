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
	int x1,f1,m1,x2,f2,m2,i;
	for(i=0;i<100;i++){
	scanf("%d%d%d%d%d%d",&x1,&f1,&m1,&x2,&f2,&m2);
	x2=x2+12;
	if(x1==0 && x2==12)
		break;
	printf("%d\n",3600*(x2-x1)+60*(f2-f1)+(m2-m1));
	
	}
	
		
	
	return 0;
}