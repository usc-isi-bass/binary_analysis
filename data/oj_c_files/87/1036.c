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

		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
        while(1){
					if(a!=0||b!=0||c!=0||d!=0||e!=0||f!=0){
		t=(12+d-a-1)*3600+(60-b-1)*60+(60-c)+60*e+f;
		printf("%d\n",t);
					}
					else break;
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		}
	return 0;
}