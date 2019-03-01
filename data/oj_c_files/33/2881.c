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


char s[1000];
int main(){
	//freopen("i.txt","r",stdin);
	int T,i;
	scanf("%d",&T);
	while (T--){
		scanf("%s",s);
		for (i=0;s[i];i++){
			if (s[i]=='A'){
				putchar('T');
			}
			if (s[i]=='T'){
				putchar('A');
			}
			if (s[i]=='G'){
				putchar('C');
			}
			if (s[i]=='C'){
				putchar('G');
			}
		}
		puts("");
	}
}