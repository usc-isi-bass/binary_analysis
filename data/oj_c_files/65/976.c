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
	int n,a=0,b=0,i,c,d;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&c,&d);
		if((c-d)==-1||(c-d)==2){
			a++;
		}else if((d-c)==-1||(d-c)==2)
			b++;
	}
    if(a>b)
		printf("A");
	else if(b>a)
	printf("B");
    else
		printf("Tie");
	return 0;
}