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
	int a,b,c,d,e,f;
	int i,m,s[100],k;
	for(i=0;m!=1;i++){
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
		m=1;}
	else{
       s[i]=(d+12)*3600+e*60+f-a*3600-b*60-c;
	   
	   }
	}

	for(k=0;k<i-1;k++){
		printf("%d\n",s[k]);}
	
		


       return 0;

}
