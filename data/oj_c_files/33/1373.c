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

char mb[30000][300],fy[30000][300];
int main(){
	
	int i=0,j=0,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",mb[i]);
		}
	for(i=0;i<n;i++){
		for(j=0;j<strlen(mb[i]);j++){
			if(mb[i][j]=='A'){
				fy[i][j]='T';
			}else if(mb[i][j]=='T'){
				fy[i][j]='A';
	        }else if(mb[i][j]=='C'){
				fy[i][j]='G';
            }else /*if(mb[i][j]=='G')*/{
				fy[i][j]='C';
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<strlen(mb[i]);j++){
			printf("%c",fy[i][j]);
		}
		printf("\n");
	}
 return 0;   
}
