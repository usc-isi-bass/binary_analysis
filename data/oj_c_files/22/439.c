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

void main()
{
	int num[300];
	char a;
	int i,largest=0,second=0,n;
	for(i=0;i<300;i++){
		scanf("%d%c",&num[i],&a);
		if(a!='\n'){
			if(num[i]>largest){
				second=largest;
				largest=num[i];
			}
			else if((num[i]<largest)&&(num[i]>second)){
				second=num[i];
			}
		}
		else{
			if(num[i]>largest){
				second=largest;
				largest=num[i];
			}
			else if((num[i]<largest)&&(num[i]>second)){
				second=num[i];
			}
			n=i;
			break;
		}
	}
	if(n==0){
		printf("No");
	}
	else{
		if(second==0){
		printf("No");
	}
    	else{
	    	printf("%d",second);
		}
	}
}