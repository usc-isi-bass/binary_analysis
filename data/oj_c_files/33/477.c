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
	char a[100],b[300],c[300];
	gets(a);
	int n=atoi(a),i,k;
	int s;
	for(i=0;i<n;i++){
		gets(b);
		s=strlen(b);
		for(k=0;b[k]!='\0';k++){
			switch (b[k]){
			case 'A':c[k]='T';break;
			case 'T':c[k]='A';break;
			case 'C':c[k]='G';break;
			case 'G':c[k]='C';break;
			}
		}
		c[s]='\0';
		puts(c);
	}
	


	return 0;
}

