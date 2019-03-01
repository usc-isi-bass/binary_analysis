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
	int a,s,d,f,g,h,j;
	int i=0;
	while(1){
		scanf("%d%d%d%d%d%d",&a,&s,&d,&f,&g,&h);
		if(a==0&&s==0&&d==0&&f==0&&g==0&&h==0){
			return 0;
		}else{
			j=(f-a+12)*3600+(g-s)*60+(h-d);
			printf("%d\n",j);
		}
	}	i++;


	return 0;
}