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
	int n,a1,a2,a3,a4,a5,a6,i,j,s,t=0;
	for(i=0;i<100;i++){
	     scanf("%d%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5,&a6);
		 
		 s=(a4+12)*3600+a5*60+a6-a1*3600-a2*60-a3;
		 if(a1!=0){
	           printf("%d\n",s);
		 }
		 if(a1==0&&2==0){
			 
			 break;
		 }
	}
	
	
	return 0;
}