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
	int i,j,x,y,a[1010];
	scanf("%d%d",&x,&y);
	memset(a,0,sizeof(a));
	for(i=x;i>0;i/=2){
		a[i]=1;
	}
	for(i=y;i>0;i/=2){
		if(a[i]){
			printf("%d",i);
			break;
		}
	}
	return 0;
}