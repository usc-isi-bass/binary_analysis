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
    int y,m,d,d1=0,d2,i;
	int md[11]={31,28,31,30,31,30,31,31,30,31,30};
	scanf("%d %d %d" ,&y,&m,&d);
	if(m==1) d2=d;
	else{

		for(i=0;i<m-1;i++) 
		     d1=d1+md[i];
	    d2=d+d1;
		
	}
	printf("%d",d2);

   return 0;
}