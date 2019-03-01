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
	char an[270],bn[270],cn[270],temp[270];
	scanf("%s%s%s",an,bn,cn);
	char *p=strstr(an,bn);
	int len=strlen(bn);
	if(p!=NULL){
		strcpy(temp,p+len);
		*p='\0';
		strcat(an,cn);
		strcat(an,temp);
	}
	printf("%s",an);
	return 0;
}