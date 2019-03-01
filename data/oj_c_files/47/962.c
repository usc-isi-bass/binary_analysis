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
	int number[NUMBER];
	scanf("%d", &n);
	int i=0;
	int a;
	while(i<n){
		scanf("%d", &a);
		number[i]=a;
		i++;
	}
	while((n-1)>=0){
		if((n-1)>0){
			printf("%d ", number[n-1]);
		n--;
		}
		else{
			printf("%d", number[0]);
			n--;
		}
	}
	return 0;
	scanf("%d",1);
}