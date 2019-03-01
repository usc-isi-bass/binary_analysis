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
	int i,j,length;
	char a[200];
	char b[200];
	scanf("%s %s",a,b);
    if(strlen(a)!=strlen(b)) {
		printf("NO");
		return 0;
	}
	length=strlen(a);
    for(i=0;i<length;i++){
		for(j=0;j<length;j++){
			if(a[i]==b[j]){ 
				b[j]='\0';
				break;	
			}		
		}
		if(j==length){
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	return 0;
}