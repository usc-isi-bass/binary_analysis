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
	int k[1000],n,i;
	for(n=0;n<=1000;n++){
		int a=0,b=0,c=0,d=0,e=0,f=0;
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	    if(a!=0||b!=0||c!=0||d!=0||e!=0||f!=0){
			k[n]=3600*(d-a+11)+3600-60*b-c+60*e+f;
		}else{
			break;
		}
	}
	for(i=0;i<n;i++){
		printf("%d\n",k[i]);
	}
	return 0;
}