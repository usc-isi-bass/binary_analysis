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
	char a[80],b[80];
	gets(a);
	gets(b);
	int i;
	for(i=0;a[i]!='\0'||b[i]!='\0';i++){
		if(a[i]>'Z')a[i]=a[i]-32;
		if(b[i]>'Z')b[i]=b[i]-32;
	}
	if(strcmp(a,b)>0)printf(">");
	else if(strcmp(a,b)<0)printf("<");
	else printf("=");
	return 0;
}