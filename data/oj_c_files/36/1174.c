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
	char zfc1[100],zfc2[100];
	scanf("%s %s",zfc1,zfc2);
	char *p1=zfc1,*p2=zfc2;
	int judge=1,judge2=0;
	for(;*p1!='\0';p1++){
		judge2=0;
		for(p2=zfc2;*p2!='\0';p2++){
			if(*p1==*p2){
				*p2=' ';
				judge2=1;
				break;
			}
		}
		if(judge2!=1){
			judge=0;
			break;
		}
	}
	if(judge&&strlen(zfc1)==strlen(zfc2)){
		printf("YES");
	}else{
		printf("NO");
	}
	return 0;
}