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


int main(int argc, char* argv[])
{
	char a[80],b[80];
	gets(a);
	gets(b);
	int l;
	l=strlen(a);
	int i;
	for(i=0;a[i]!='\0';i++){
		if(a[i]>='A'&&a[i]<='Z') a[i]+=32;
	}
	for(i=0;b[i]!='\0';i++){
		if(b[i]>='A'&&b[i]<='Z') b[i]+=32;
	}
	int t;t=0;
	for(i=0;a[i]!='\0';i++){
		if(a[i]>b[i]){
			printf(">");
			break;
		}
		else if(a[i]<b[i]){
			printf("<");
			break;
		}
		else if(a[i]==b[i]) t++;
	}
	if(t==l) printf("=");
	return 0;
}