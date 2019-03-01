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
	int flag=1,i,n,m,j;
	char str[256],sub[256],rep[256];
	scanf("%s%s%s",&str,&sub,&rep);
	n=strlen(str);
	m=strlen(sub);
	for(i=0;i<n;i++){
		if(str[i]==sub[0]){
			flag=1;
			for(j=0;j<m;j++){
				if(str[i+j]!=sub[j]){
					flag=0;
					break;
				}
			}
			if(flag==1){
				for(j=0;j<m;j++){
					str[i+j]=rep[j];
				}
				break;
			}
		}
	}
	printf("%s",str);
	return 0;
}
