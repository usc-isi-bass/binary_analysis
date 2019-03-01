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
	int i,n,j,k,x=0;
	char s[100001];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",s);

		for(j=0;j<strlen(s);j++,x=0){
			for(k=0;k<strlen(s);k++){
				if(s[k]==s[j]&&k!=j){
					//printf("s[k]=%c,%d\n",s[k],k);
					x++;
					//printf("x=%d\n",x);
					
				}
				

			}

			if(x==0){
				printf("%c\n",s[j]);
				break;
			}
		
		}

		if(j==strlen(s))
			printf("no\n");



	}

	return 0;
}