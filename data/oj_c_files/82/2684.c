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
	int i;
	int a;
	int b;
	b=0;
	a=0;
	int zzd[101];
	int hzy[101];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&zzd[i],&hzy[i]);
	}
	for(i=0;i<n;i++){
		if(zzd[i]>=90&&zzd[i]<=140&&hzy[i]>=60&&hzy[i]<=90){
               a++;
		}
		else{
			if(a>b){
				b=a;
			}
			a=0;
		}
	}
	if(b>a){
	printf("%d",b);
	}
	else if(b<=a){
		printf("%d",a);
	}
	return 0;
}
