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

void main()
{ char s[100];
	int i,j,n;
	gets(s);
	for(i=0;i<strlen(s);i++){
		if(s[i]!=' ')
		printf("%c",s[i]);
		else{
	if(s[i-1]==' ')
		continue;
		else printf("%c",s[i]);}}
}


