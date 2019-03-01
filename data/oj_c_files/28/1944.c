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
	char xulie[10000];
	int l=0;
	int i,len;
	int x,y;
	x=0;
	y=0;
	gets(xulie);
	len=strlen(xulie);
	xulie[len]=' ';
	for(i=0;i<=len;i++){
		if(xulie[i]!=' '){
			l++;
		}else if(xulie[i]==' '&&xulie[i-1]!=' '){
			printf("%d",l);
			l=0;
			break;
		}
	}
	i++;
	while(i<=len){
		if(xulie[i]!=' '){
			l++;
		}else if(xulie[i]==' '&&xulie[i-1]!=' '){
			printf(",%d",l);
			l=0;
		}
		i++;
	}
	return 0;
}