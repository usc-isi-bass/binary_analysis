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
	int i,j,n;
	char s[1001];
	scanf("%d",&n);
	for(j=0;j<n;j++){
		int freq[27]={0};
		int flag=0;
    	scanf("%s",s);
    	for(i=0;i<strlen(s);i++){
    		freq[s[i]-97]++;
		}
    	for(i=0;i<strlen(s);i++){
    		if(freq[s[i]-97]==1){
	    		printf("%c\n",s[i]);
	    		flag=1;
	    		break;
			}
		}
    	if(flag==0){
	    	printf("no\n");
		}
	}
	return 0;
}
