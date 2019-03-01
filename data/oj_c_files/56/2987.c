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

void change(char *);
int main()
{
	char *p;
	p = (char*)malloc(5*sizeof(char));
	gets(p);
	
	change(p);
}
void change(char *q){
	char *q0 = q;
	if (*q=='\0') printf("\n");
	else {
        for (;*q!='\0';q++){}
		printf("%c",*(q-1));
		*(q-1)='\0';
		change(q0);
	}
}
