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
	int i,j,n,l;
	char s[MAX+1];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",s);
		l=strlen(s);
		for(j=0;j<l;j++){
			if(s[l-1]=='r'||s[l-1]=='y'){
				for(j=0;j<l-2;j++){
				printf("%c",s[j]);
				}
				break;
			}else if(s[l-1]=='g'){
				for(j=0;j<l-3;j++){
				printf("%c",s[j]);
				}
				break;
			}
		}
		printf("\n");
	}
	return 0;
}