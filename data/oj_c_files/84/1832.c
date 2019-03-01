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

int main (){
	int first,second,tmp;
	int n;
	int i=0;
	scanf("%d",&n);
	
    first=-10000;
	second=-100000;
		do{
			i++;
		scanf("%d",&tmp);
	     if (tmp>first)
		 {second=first;
		 first=tmp;
		 }
		   else if (tmp>second)
		 { second=tmp;
		 }
		}while (i!=n);
		
	



printf("%d\n%d",first,second);
return 0;
}