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
	int i,j,t[10000][6],T;
	for(i=0;;i++){
		for(j=0;j<6;j++){
			scanf("%d",&t[i][j]);
		}
		if(t[i][0]==0){
			return 0;
		}
		T=(t[i][3]+12-t[i][0])*3600+t[i][4]*60+t[i][5]-t[i][1]*60-t[i][2];
		printf("%d\n",T);
	}
}
		

