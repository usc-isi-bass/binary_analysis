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
	int n,i=0,t=0;
	char c;
	for(;;){
		scanf("%c",&c);
		if(c=='\n'){
			if(i!=0)printf(",");
			printf("%d",t);
			break;
		}
		else if(c==' '){
			if(t==0)continue;
			else{
			if(i!=0)printf(",");
			printf("%d",t);
			t=0;
			i=1;
			}
		}
		else t++;
	}
	return 0;
}