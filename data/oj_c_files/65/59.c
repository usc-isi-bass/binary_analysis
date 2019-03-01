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
int m,i,k=0;
int a,b;
scanf("%d",&m);
for(i=0;i<m;i++){
	scanf("%d %d",&a,&b);
	if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0)){
		k++;
	}else{
if(a!=b)
		k--;
	}
}

if(k>0)
	printf("A");
if(	k==0)
printf("Tie");
if(k<0)
printf("B");
return 0;
}