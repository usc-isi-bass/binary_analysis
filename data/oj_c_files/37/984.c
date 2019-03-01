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
	char zxc[99];
	int sz[99];
	int m,n,i,t,k;

	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(m=0;m<98;m++){
		sz[m]=0;
	}
		scanf("%s",zxc);
		m=strlen(zxc);
		for(t=0;t<m;t++){
			for(k=t+1;k<m;k++){
				if(zxc[t]==zxc[k]){
					sz[t]++;
					sz[k]++;
				}
			}
		}
	
		for(t=0;t<m;t++){
				
			if(sz[t]==0){
				printf("%c\n",zxc[t]);
			break;
			}else if(t==(m-1)){
				printf("no\n");
			}
		}
	}
	return 0;
}
