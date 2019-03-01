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
	int i,l;
	char a[50],b[50];
	gets(a);gets(b);
	l=strlen(a);
	for(i=0;i<l;i++){
		if(a[i]>=97)a[i]=a[i]-32;
	}
	for(i=0;i<l;i++){
		if(b[i]>=97)b[i]=b[i]-32;
	}
	if(strcmp(a,b)>0)printf(">");
	if(strcmp(a,b)<0)printf("<");
	if(strcmp(a,b)==0) printf("=");
	return 0;
}
