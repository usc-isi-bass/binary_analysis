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
	char s[100];
	char a;
	gets(s);
	int n,i,j;
	n=strlen(s);
	for(i=0;i<(n-1);i++){
		j=s[i]+s[i+1];
        a=j;
		printf("%c",a);
	}
	j=s[n-1]+s[0];
	a=j;
	printf("%c",a);

	
	return 0;
}