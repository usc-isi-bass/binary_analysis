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
    int n;
	int i=0,s=0;
    scanf("%d" ,&n);
	while(i<=n){
		if(i%7==0){
		s=s;
		}else if(i<=10){
		s=s+i*i;
		}else if(((i%10)!=7)&&(((i-(i%10))/10)!=7)){
		s=s+i*i;
		}
		i++;
	}
    printf("%d" ,s);
return 0;
}   