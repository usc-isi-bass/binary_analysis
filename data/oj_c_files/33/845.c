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
	char s[999][256];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",s[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;s[i][j];j++){
			if(s[i][j]=='A'){
				s[i][j]='T';
			}
			else if(s[i][j]=='T'){
				s[i][j]='A';
			}
			else if(s[i][j]=='C'){
				s[i][j]='G';
			}
			else if(s[i][j]=='G'){
				s[i][j]='C';
			}
		}
	}
	for(i=0;i<n;i++){
		puts(s[i]);
	}
	return 0;
}

