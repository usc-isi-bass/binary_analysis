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
	char a[20][21];
	int j,i,n,b,m;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	for(i=0;i<n;i++){
		m=0;
		for(j=0;a[i][j];j++){
	if(!((a[i][j]=='_')||(a[i][j] >= 'A' && a[i][j] <= 'Z')||(a[i][j] >= 'a' && a[i][j] <= 'z') ||(a[i][j] >= '0' && a[i][j] <= '9'&&j>0))){
					m=1;
				}
				}
			if(m==0){
				printf("yes\n");
			}else{
			printf("no\n");
				
			}
	}
	return 0;
}

