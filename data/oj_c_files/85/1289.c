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
	int T,i;
	scanf("%d",&T);
	while (T--){
		scanf("%s",s);
		if (isalpha(s[0])||s[0]=='_'){
			for (i=1;s[i];i++){
				if (!isalpha(s[i])&&!isdigit(s[i])&&s[i]!='_'){
					break;
				}
			}
			if (s[i]){
				puts("no");
			}else puts("yes");
		}else 
			puts("no");
	}
}