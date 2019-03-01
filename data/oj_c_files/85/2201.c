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
	char str[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",str);
		if(str[0]=='_'||(str[0]>='a'&&str[0]<='z')||(str[0]>='A'&&str[0]<='Z')){
			for(j=1;str[j]!='\0';j++){
				if(str[j]=='_'||(str[j]>='a'&&str[j]<='z')||(str[j]>='A'&&str[j]<='Z')||(str[j]>='0'&&str[j]<='9')){
					j=j;
			}else{
					printf("no\n");
					break;
			}
			}
			if(str[j]=='\0'){
					printf("yes\n");
			}
		}else{
			printf("no\n");
		}
	}
	return 0;
}
