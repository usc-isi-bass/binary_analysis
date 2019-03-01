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
	int a,b,c,d,e,f,sum,t[1000][10],i,k;
	for(i=0;;i++){
		for(k=1;k<=6;k++){
    	scanf("%d",&t[i][k]);
		}
		if(t[i][1]==0)
			break;
	}
	for(i=0;t[i][1]>0;i++){
		a=t[i][1];
		b=t[i][2];
		c=t[i][3];
		d=t[i][4];
		e=t[i][5];
		f=t[i][6];
		sum=12*60*60-a*60*60-b*60-c+d*60*60+e*60+f;
		printf("%d\n",sum);
	}
	return 0;
}