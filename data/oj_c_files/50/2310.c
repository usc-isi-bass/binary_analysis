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
    int m,i,t,w;
	int sz[20];
	t=0;
	scanf("%d",&m);
	w=(m+12)%7;
	sz[1]=w;
	sz[2]=(w+31)%7;
	sz[3]=(sz[2]+28)%7;
	sz[4]=(sz[3]+31)%7;
	sz[5]=(sz[4]+30)%7;
	sz[6]=(sz[5]+31)%7;
	sz[7]=(sz[6]+30)%7;
	sz[8]=(sz[7]+31)%7;
	sz[9]=(sz[8]+31)%7;
	sz[10]=(sz[9]+30)%7;
	sz[11]=(sz[10]+31)%7;
	sz[12]=(sz[11]+30)%7;
	for(i=1;i<=12;i++){
		if(sz[i]==5){printf("%d\n",i);t=1;}
	}
	return 0;
}