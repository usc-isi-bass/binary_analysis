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
	char str[3000],b[10];
	char *s=str,*p;
	int l;
	gets(s);
	strcat(s," ");
	while(*s){
		p=strchr(s,' ');
		*p='\0';
		strcpy(b,s);
		l=strlen(b);
		if(l!=0){
			printf("%d",l);
		}
		s=p+1;
		if(*s&&l!=0){
			printf(",");
		}
	}
	return 0;
}

