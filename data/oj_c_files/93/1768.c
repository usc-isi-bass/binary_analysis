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
	int x,i;
	scanf("%d",&x);
	i=0;

	if(x%3==0) printf("3");
	else i++;

	if(x%(3*5)==0) printf(" ");
	
	if(x%5==0) printf("5");
	else i++;

	if(x%(5*7)==0) printf(" ");

	if(x%(3*7)==0&&x%5!=0) printf(" ");
	
	if(x%7==0) printf("7");
	else i++;
	
	if(i==3) printf("n");
}