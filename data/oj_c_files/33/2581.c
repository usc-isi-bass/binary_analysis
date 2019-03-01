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

int main()
{
	char jianji[1000][256];
	int n,i,k,m;
	scanf("%d",&n);

		for(i=0;i<n;i++){
scanf("%s",&jianji[i]);
		}
		for(i=0;i<n;i++){
		m=strlen(jianji[i]);
		for(k=0;k<m;k++){
			if(jianji[i][k]=='A'){
				jianji[i][k]='T';
			}else{
				if(jianji[i][k]=='T'){
				jianji[i][k]='A';
				}else{
					if(jianji[i][k]=='C'){
				jianji[i][k]='G';
					}else{
						if(jianji[i][k]=='G'){
				jianji[i][k]='C';
		}
	}
		}
			}
		}
		}
				for(i=0;i<n;i++){
		printf("%s\n",jianji[i]);	
				}

return 0;
}
