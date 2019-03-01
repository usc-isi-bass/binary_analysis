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
	char s[300][100];
	int i = 0;
	scanf("%s",s[i]);
	printf("%d",strlen(s[i]));
	while(1){
		i++;
		scanf("%s",s[i]);
		if(strcmp(s[i],s[i-1])==0 || strlen(s[i]) == 0 )
			break;
		else{
			printf(",");
			printf("%d",strlen(s[i]));
		}
	}
}