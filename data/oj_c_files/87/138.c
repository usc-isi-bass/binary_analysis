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
	int a,b,c,d,e,f,t;
	int i=0;
	while(i<100){
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
			if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
				break;
			}else{
				f=f+60;
				e=e+60-1;
				d=d+11;
				t=(d-a)*3600+(e-b)*60+(f-c);
				printf("%d\n",t);
				i++;
			}
	}return 0;
}