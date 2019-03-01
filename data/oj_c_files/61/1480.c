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

int dijigeshu(int a);
int main(){
	int x=1,y=1;
	int n,a,b[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		b[i]=dijigeshu(a);
	}
	for(int j=0;j<n;j++){
		printf("%d\n",b[j]);
	}
	return 0;
}
int dijigeshu(int a){
    int x=1,y=1,s;
	if(a==1||a==2){
		return 1;
	}else{
		for(int j=3;j<=a;j++){
			s=x+y;
			x=y;
			y=s;
		}
		return s;
	}
}
