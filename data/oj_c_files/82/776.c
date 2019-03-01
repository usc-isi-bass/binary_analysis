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
	int sum=0,t=0;
	int n;
	scanf("%d",&n);
	for(n;n>0;n--){
	int a,b;
    scanf("%d %d",&a,&b);
	if(a>=90 && a<=140 && b>=60 && b<=90){
		sum=sum+1;
		if(t<=sum){
			t=sum;
		}
	}
	else{sum=0;
	}
	}
printf("%d",t);
return 0;
}