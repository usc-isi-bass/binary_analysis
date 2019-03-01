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
	char s[21];
	int i,j,k,n,l;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",s);
		l=strlen(s);
		k=0;
		for(j=0;j<l;j++){
			if(j==0){
				if((s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')||s[j]=='_'){
					k+=0;
				}else{
					k++;
				break;	
				}
			}else if(j!=0){
                if((s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')||(s[j]>='0'&&s[j]<='9')||s[j]=='_'){
					k+=0;
				}else{
					k++;
					break;
				}
			}
		}
			if(k==0){
				printf("yes\n");
			}else{
				printf("no\n");
			}
		

	}
	return 0;
}
		    
					