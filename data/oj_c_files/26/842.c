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
	int i,b,j,l;
	char s[MAX+1];
	char a[MAX+1];
	gets(s);
	l=strlen(s);
	b=0;
	for(i=0;i<=l;i++){
		if(s[i]!=' '){
			a[b]=s[i];
			b++;
		}
		else {
			a[b]=s[i];
			b++;
			for(j=i;s[j]==' ';j++){
			}
			i=j-1;
		}
	}
	puts(a);
	return 0;
}