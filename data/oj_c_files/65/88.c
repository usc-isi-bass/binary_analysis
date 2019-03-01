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
int a=0;
int b=0;
int i;
for(i=0;i<n;i++){

int p;
int q;
scanf("%d %d",&p,&q);
if(p-q!=0){

	if(p-q==-1||p-q==2){
	a++;
	}
	else{
	b++;
	}




}

















}





if(a==b){
printf("Tie");

}
else if(a>b){

printf("A");

}

else{
printf("B");

}

















return 0;
}