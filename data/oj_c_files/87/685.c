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
	 int a,b,c,d,e,f,m;
           int x=0;
while(!((a==0)&&(b==0)&&(c==0)&&(d==0)&&(e==0)&&(f==0))){
x++;
	 scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
if((a==0)&&(b==0)&&(c==0)&&(d==0)&&(e==0)&&(f==0)){
	return 0;
}

     m=(12-a+d)*3600+e*60+f-b*60-c;

     if(x==1){
	 printf("%d",m);
}else{
printf("\n");
printf("%d",m);
}	 

}
	return 0;
}