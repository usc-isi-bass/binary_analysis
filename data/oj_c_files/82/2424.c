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
	int n,i;
	scanf("%d",&n);
	struct press{
		int a,b;
	}press[100];
	for(i=0;i<n;i++){
		scanf("%d%d",&(press[i].a),&(press[i].b));
	}
	int normal=0,max=0;
	for(i=0;i<n;i++){
		if(press[i].a>=90&&press[i].a<=140&&press[i].b>=60&&press[i].b<=90){
			normal++;
		}else{
			if(normal>max){
				max=normal;
			}
			normal=0;
		}
	}
	if(normal>max){
		max=normal;
	}
	printf("%d",max);
	return 0;
}