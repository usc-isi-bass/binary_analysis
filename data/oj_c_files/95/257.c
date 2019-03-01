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
	char s[100],t[100],c;
	int i,m;
	gets(s);
	gets(t);
	for (i=0;s[i]!='\0';i++){
		if ((s[i]>='a')&&(s[i]<='z'))
			s[i]=s[i]-32;
	}
	for (i=0;t[i]!='\0';i++){
		if ((t[i]>='a')&&(t[i]<='z'))
			t[i]=t[i]-32;
	}
	m=1;
	for (i=0;(t[i]!='\0')&&(s[i]!='\0');i++){
		if (s[i]>t[i]){
			printf(">");
			m=0;
			break;
		}
		else if (s[i]<t[i]){
			printf("<");
			m=0;
			break;
		}
	}
	if (m==1)
		printf("=");
	return 0;
}