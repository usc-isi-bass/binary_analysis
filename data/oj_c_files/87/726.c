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
	int a,b,c,d,e,f,j,p;
    for(j=0;j<1000;j++){
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a==b&&b==c&&c==d&&d==e&&e==f&&f==0){
			return 0;}
		else{p=0;
    p=3600*(12-a-1+d)+60*(60-b-1+e)+60-c+f;
		printf("%d\n",p);}
	}
return 0;
}