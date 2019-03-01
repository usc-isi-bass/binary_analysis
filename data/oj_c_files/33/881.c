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
	int i,n;
	char s[N][L+1],*p;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%s", s[i]);
		for(p=s[i];*p!='\0';p++){
			if(*p=='A')
				*p='T';
			else if(*p=='T')
				*p='A';
			else if(*p=='C')
				*p='G';
			else if(*p=='G')
				*p='C';
		}
		puts(s[i]);
	}
	return 0;
}