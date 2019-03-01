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

int main (){
	int n;
	int i;
	int a=0,b=0;
	scanf("%d",&n);
	int sz[100][2];
	for(i=0;i<n;i++){
		scanf("%d %d",&(sz[i][0]),&(sz[i][1]));
	}
	for(i=0;i<n;i++){
		if(sz[i][0]==sz[i][1]){
			continue;
		}
		else if((sz[i][0]==0&&sz[i][1]==1)||(sz[i][0]==1&&sz[i][1]==2)||(sz[i][0]==2&&sz[i][1]==0)){
			a++;
		}
		else{
			b++;
		}
	}
	if(a>b){
		printf("A");
	}
	else if(b>a){
		printf("B");
	}
	else if(b=a){
		printf("Tie");
	}

	return 0;
}