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
	int t[100][6],i,a,b,result[100],k;
	for(i=0;i<100;i++){
		scanf("%d%d%d%d%d%d",&t[i][0],&t[i][1],&t[i][2],&t[i][3],&t[i][4],&t[i][5]);
		if(t[i][0]==0&&t[i][1]==0){
			break;
		}
		a=t[i][0]*60*60+t[i][1]*60+t[i][2];
		b=(12+t[i][3])*60*60+t[i][4]*60+t[i][5];
		result[i]=b-a;
	}
	k=i;
    for(i=0;i<k;i++){
		printf("%d\n",result[i]);
	}
	return 0;
}
