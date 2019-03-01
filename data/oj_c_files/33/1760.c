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

struct point{
    char A[256];
	char B[256];
};
int main(){
	int n,i,j;
	scanf("%d",&n);
	struct point chain[n];
	for(i=0;i<n;i++){
		scanf("%s",&(chain[i].A));
	}
	for(i=0;i<n;i++){
		for(j=0;chain[i].A[j];j++){
			if(chain[i].A[j]=='A'){
				chain[i].B[j]='T';
			}
			if(chain[i].A[j]=='T'){
				chain[i].B[j]='A';
			}
			if(chain[i].A[j]=='C'){
				chain[i].B[j]='G';
			}
			if(chain[i].A[j]=='G'){
				chain[i].B[j]='C';
			}
		}chain[i].B[j]='\0';
	}
	for(i=0;i<n;i++){
		printf("%s\n",chain[i].B);
	}
	return 0;
}