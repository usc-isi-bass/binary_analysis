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


void main(){
	char c;
	int flag=0;
	do{
		scanf("%c",&c);
		if(c==' '){
			if(flag==0){
				flag=1;
				printf("%c",c);
			}
			else
				flag=1;
		}
		else
			flag=0;
		if(flag==0)
			printf("%c",c);
	}while(c!='\n');
}