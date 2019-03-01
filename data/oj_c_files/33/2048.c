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
char s[1000][260];
	int n,i,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",s[i]);
	}
	for(i=0;i<n;i++){
		for(k=0;k<255;k++){
			switch(s[i][k]){
			case 'A':
				s[i][k]='T';
				break;
			case 'T':
				s[i][k]='A';
				break;
			case 'C':
				s[i][k]='G';
				break;
			case 'G':
				s[i][k]='C';
				break;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s\n",s[i]);
	}
	return 0;
}