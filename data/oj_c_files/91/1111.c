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
	int n,i;
	char zf1[10000],zf2[10000];
	gets(zf1);
	for(i=0;;i++){
		if(zf1[i+1]=='\0'){
			zf2[i]=zf1[0]+zf1[i];
			zf2[i+1]='\0';
			break;
		}
		zf2[i]=zf1[i]+zf1[i+1];
	}
	for(i=0;;i++){
		if(zf2[i]=='\0')break;
		printf("%c",zf2[i]);
	}
	return 0;
}

