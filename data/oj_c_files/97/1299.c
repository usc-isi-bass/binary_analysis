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
	int n,n1,n2,n3,n4,n5,n6;
	scanf("%d",&n);
	n1=n/100;
	printf("%d\n",n1);
	if((n%100)>=50){
		n2=1;
		n3=((n%100)-50)/20;
		n4=(((n%100)-50)%20)/10;
	}                                                                                                                                                                                                    
	else{
	    n2=0;
		n3=(n%100)/20;
		n4=((n%100)%20)/10;
	}                                                            
	printf("%d\n",n2);
	printf("%d\n",n3);
	
    printf("%d\n",n4);
    n5=(((n%100)%20)%10)/5;
	n6=(((n%100)%20)%10)%5;                                                                     
    printf("%d\n",n5);
	printf("%d\n",n6);
 	return 0;

}