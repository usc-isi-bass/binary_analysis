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
	int n, i, c, j;
	char s[30];
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		scanf("%s",s);
		c=0;
		j=0;
		if((s[0]=='_')||('a'<=s[0]&&s[0]<='z')||('A'<=s[0]&&s[0]<='Z')){
			for(j=1;s[j]!='\0';j++){
				if(('0'<=s[j]&&s[j]<='9')||(s[j]=='_')||('a'<=s[j]&&s[j]<='z')||('A'<=s[j]&&s[j]<='Z')){
					c++;
				}
			}
			if(c==j-1){
				printf("yes\n");
			}
			else 	printf("no\n");
		}
	else printf("no\n");	 
	}
	
		return 0;
	}

