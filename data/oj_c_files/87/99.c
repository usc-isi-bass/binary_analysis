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
int sz[6]={1,1,1,1,1,1},x,i,j;
for(i=0;;i++){
	for(j=0;j<6;j++){
	scanf("%d",&sz[j]);
	}
	if(sz[0]==0){
	break;
	}
	x=(sz[3]+12-sz[0])*3600-sz[1]*60-sz[2]+sz[4]*60+sz[5];
	printf("%d\n",x);

}
return 0;
}
