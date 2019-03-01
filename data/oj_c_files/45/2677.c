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
	char s[100],w[10000];
	scanf("%s",s);
	scanf("%s",w);
	int m,n,i,j,k,a;
    a=1;
	m=strlen(s);
	n=strlen(w);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(s[i]==w[j]){
				for(k=1;k<m;k++){
					if(s[i+k]==w[j+k])
						a=a+1;
				}
				if(a==m){
					printf("%d",j);
					return 0;
				}
			}
		}
	}

	return 0;
}