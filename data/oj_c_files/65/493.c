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

int n,a,b,x=0,y=0;
scanf("%d\n",&n);
for(int i=0;i<n;i++){
	scanf("%d",&a);
	scanf("%d",&b);
	if(a==0&&b==0){
		x=x;
	}if(a==0&&b==1){
		x++;
	}if(a==0&&b==2){
		y++;
	}if(a==1&&b==0){
		y++;
	}if(a==1&&b==1){
		x=x;
	}if(a==1&&b==2){
		x++;
	}if(a==2&&b==0){
		x++;
	}if(a==2&&b==1){
		y++;
	}if(a==2&&b==2){
		x=x;
	}
}
if(x>y){
	printf("A");
}
if(x<y){
	printf("B");
}
if(x==y){
	printf("Tie");
}

return 0;
}
