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

int f (int x,int y){
	int result;
	if(y==1||x==1||x==0)
		return 1;
	else if(x-y<0)
		return f(x,x);
	else 
	{	result=f(x,y-1)+f(x-y,y);
	return result;}
}
int main(){
 int M,N,n,r,i;
 scanf("%d",&n);
 for(i=0;i<n;i++){
	 scanf("%d %d",&M,&N);
	 r=f(M,N);
	 printf("%d\n",r);
 }
 return 0;
}

 
 