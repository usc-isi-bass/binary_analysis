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
	scanf("%d",&n);
	int a[100]={0};
	int b,c;
	int i,j=0;
	for(i=0;i<n;i++){
		scanf("%d%d",&b,&c);
		if(b<=140&&b>=90&&c<=90&&c>=60){
			a[j]++;
		}
		else{
			j++;
		}
	}
	b=a[0];
	for(i=1;i<=j;i++){
		if(a[i]>b){
			b=a[i];
		}
	}
	printf("%d",b);
	return 0;
}