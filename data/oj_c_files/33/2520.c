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
	int n,i;
	char dna[256];
	gets(dna);
	n=atoi(dna);
	for(i=1;i<=n;i++){
		gets(dna);
		char *p=dna;
		char *q;
		char cdna[256]={'\0'};
		char *c=cdna;
		q=p;
		for(p=q;*p!='\0';p++){
			if(*p=='A'){
				*c='T';
				c++;
			}else if(*p=='T'){
				*c='A';
				c++;
			}else if(*p=='G'){
				*c='C';
				c++;
			}else if(*p=='C'){
				*c='G';
				c++;
			}
		}
		printf("%s\n",cdna);
	}
	return 0;
}