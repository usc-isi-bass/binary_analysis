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
	int a,b;
	int sum=0;
	int i;
	int c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		if(a>=90&&a<=140&&b>=60&&b<=90){
			sum++;
		}
		else{
			if(sum>c){
				c=sum;
			}
			sum=0;
		}
	}
	if(c>=sum){
	printf("%d",c);
	}
	if(c<sum){
		printf("%d",sum);
	}

	return 0;
}