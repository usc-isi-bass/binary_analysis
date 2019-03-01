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
	char str[50],str1[50];
	scanf("%s %s",str,str1);
	char *tmp = strstr(str1,str);
	int i,len = strlen(str1);
	for(i = 0;i < len;i++){
		if(strcmp(str1 + i,tmp) == 0){
			printf("%d",i);
			break;
		}
	}
	return 0;
}
