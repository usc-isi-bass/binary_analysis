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
int b[n][2];
int i,j,a=0,c=0;
for(i=0;i<n;i++){
     scanf("%d%d",&b[i][0],&b[i][1]);
	}

for(i=0;i<n;i++){
	if(b[i][0]==0&&b[i][1]==1){
		a++;
	}else if(b[i][0]==1&&b[i][1]==2){
		a++;
	}else if(b[i][0]==2&&b[i][1]==0){
		a++;
	}else if(b[i][1]==1&&b[i][0]==2){
		c++;
	}else if(b[i][1]==0&&b[i][0]==1){
		c++;
	}else if(b[i][1]==2&&b[i][0]==0){
		c++;
	}else if(b[i][0]==b[i][1]){
	   continue;
	}
}
if(a>c){
	printf("A");
}else if(a<c){
	printf("B");
}else if(a==c){
	printf("Tie");
}
return 0;



}
