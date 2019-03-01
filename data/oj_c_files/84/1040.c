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
	int a,m,i,num,n;
	scanf("%d",&a);
	i=1;
    while(i<=a){
		scanf("%d",&num);
		if(i==1){
		n=0,m=num;}
		else{
        if((num>m)&&(num>n)){
			n=m,m=num;}
		else if((num<m)&&(num>n)){
			n=num;}
	}
		i=i+1;
	}
	printf("%d\n%d",m,n);
			return 0;
}