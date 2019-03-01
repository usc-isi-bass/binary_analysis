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
    int m1,i;
	char zfc1[200];
	char zfc2[200];
	gets(zfc1);
	m1=strlen(zfc1);
	for(i=0;i<m1-1;i++){
		zfc2[i]=zfc1[i]+zfc1[i+1];
	}
	zfc2[m1-1]=zfc1[m1-1]+zfc1[0];
	for(i=0;i<m1;i++){
		printf("%c",zfc2[i]);
	}
	return 0;
}