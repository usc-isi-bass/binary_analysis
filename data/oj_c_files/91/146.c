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
	char *p1,*p2,a[100];
	int len,i=0;
	gets(a);
	len=strlen(a);
	p1=a;
	p2=a+1;
	do{  
         printf("%c",*p1+*p2);
		 p1=p2;
		 if(p2==a+len-1){
			 p2=a;
		 }
		 else p2++;
		 i++;
	}while(i<len);
	return 0;
}
		