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
	int n,x,y;
	int i=1;
	int max=0;
	int time=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d %d\n",&x,&y);
		if(x>=90 && x<=140 && y>=60 && y<=90){
			time+=1;
			if(time>=max){
				max=time;
			}
		}else{
			time=0;
		}
	}
	printf("%d",max);
	return 0;
}
