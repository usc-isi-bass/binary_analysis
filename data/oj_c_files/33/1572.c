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
	int n,i,j;
	char s[5000];
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%s", &s);
		for(j=0;s[j];j++){
			if(s[j]=='A'){
				s[j]='T';}
			else{
				if(s[j]=='T'){
					s[j]='A';}
				else{
					if(s[j]=='C'){
						s[j]='G';}
					else{
						s[j]='C';}
				}
			}			
		}
		printf("%s\n", s);
	}
	return 0;
}