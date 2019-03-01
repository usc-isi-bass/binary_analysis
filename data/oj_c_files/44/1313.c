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
	int reverse(int num);
	int i,num,a;
	for(i=0;i<6;i++){
		scanf("%d",&num);
		a=reverse(num);
		printf("%d\n",a);
	}
	return 0;
}
int reverse(int num){
	int z=0,a,i,j;
	if(num>=0){
		for(i=0;i<10;i++){
			a=num%10;
			num=num/10;
			z=z*10+a;
			if(num==0){
				break;
			}
		}
	}
	else{
		num=-num;
		for(j=0;j<32;j++){
			a=num%10;
			num=num/10;
			z=z*10+a;
			if(num==0){
				break;
			}
		}
		z=-z;
	}
	return z;	
}
