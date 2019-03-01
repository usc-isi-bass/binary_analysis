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
    int n,i,j;
	char t[256];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",t);
		for(j=0;t[j]!='\0';j++){
			if(t[j]=='A') t[j]='T';
			else if(t[j]=='T') t[j]='A';
			else if(t[j]=='C') t[j]='G';
			else if(t[j]=='G') t[j]='C';
		}
		puts(t);
	}
	return 0;
}