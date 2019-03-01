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

int main (){
	char str[100];
	int n, j, i, sz[100];
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%s", str);
		if((str[0]<='Z'&&str[0]>='A')||str[0]=='_'||(str[0]<='z'&&str[0]>='a')){
		for(j=1;str[j]!='\0';j++){
			if((str[j]<='Z'&&str[j]>='A')||str[j]=='_'||(str[j]<='z'&&str[j]>='a')||(str[j]>='0'&&str[j]<='9')){
				sz[i]=1;
			}else{
				sz[i]=0;
				break;
			}
		}
		}else{
			sz[i]=0;
		}
	}
	for(i=0;i<n;i++){
		if(sz[i]==0){
			printf("no\n");
		}else{
			printf("yes\n");
		}
	}
	return 0;
}
