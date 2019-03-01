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
	char a[21];
	scanf("%d",&n);
	for(j=0;j<n;j++){
		scanf("%s",a);
		for(i=0;a[i];i++){
		if(a[i]=='_'||(a[i]>='0'&&a[i]<='9')||(a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')){
			if(i==0&&(a[i]>='0'&&a[i]<='9')){
				printf("no\n");
				break;
			}
		}
		if(!(a[i]=='_'||(a[i]>='0'&&a[i]<='9')||(a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))){
			printf("no\n");
			break;
		}
		}
		if(a[i]=='\0'){
			printf("yes\n");
		}
	}
	return 0;
}


	

