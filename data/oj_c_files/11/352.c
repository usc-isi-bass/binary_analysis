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


int main()
{
	int a,b,c,n;
	scanf("%d%d%d",&a,&b,&c);
	if ((a%4)==0&&a%100!=0||(a%400)==0){
		switch(b){
		case 1:
			n=c;
			printf("%d",n);
			break;
		case 2:
		    n=31+c;
            printf("%d",n);
			break;
        case 3:
			n=31+29+c;
            printf("%d",n);
			break;
		case 4:
			n=31+29+31+c;
        	printf("%d",n);
			break;
		case 5:
			n=31+29+31+30+c;
	        printf("%d",n);
			break;
        case 6:
			n=31+29+31+30+31+c;
            printf("%d",n);
			break;
        case 7:
			n=31+29+31+30+31+30+c;
	     	printf("%d",n);
			break;
        case 8:
			n=31+29+31+30+31+30+31+c;
        	printf("%d",n);
			break;
		case 9:
			n=31+29+31+30+31+30+31+31+c;
	        printf("%d",n);
			break;
		case 10:
			n=31+29+31+30+31+30+31+31+30+c;
            printf("%d",n);
			break;
        case 11: 
			n=31+29+31+30+31+30+31+31+30+31+c;
          	printf("%d",n);
			break;
		case 12:
            n=31+29+31+30+31+30+31+31+30+31+30+c;
	        printf("%d",n);
			break;
		}
	}
	else 
	switch(b){
		case 1:
			n=c;
			printf("%d",n);
			break;
		case 2:
		    n=31+c;
            printf("%d",n);
			break;
        case 3:
			n=31+28+c;
            printf("%d",n);
			break;
		case 4:
			n=31+28+31+c;
        	printf("%d",n);
			break;
		case 5:
			n=31+28+31+30+c;
	        printf("%d",n);
			break;
        case 6:
			n=31+28+31+30+31+c;
            printf("%d",n);
			break;
        case 7:
			n=31+28+31+30+31+30+c;
	     	printf("%d",n);
			break;
        case 8:
			n=31+28+31+30+31+30+31+c;
        	printf("%d",n);
			break;
		case 9:
			n=31+28+31+30+31+30+31+31+c;
	        printf("%d",n);
			break;
		case 10:
			n=31+28+31+30+31+30+31+31+30+c;
            printf("%d",n);
			break;
        case 11: 
			n=31+28+31+30+31+30+31+31+30+31+c;
          	printf("%d",n);
			break;
		case 12:
            n=31+28+31+30+31+30+31+31+30+31+30+c;
	        printf("%d",n);
			break;
	}
	return 0;
}
	

